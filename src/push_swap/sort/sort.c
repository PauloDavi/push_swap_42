/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:53:44 by cobli             #+#    #+#             */
/*   Updated: 2023/09/02 18:25:35 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_cheaper_to_b(t_push_swap *p, t_maximum maximum);
static void	push_b(t_push_swap *p, t_maximum m);

void	sort(t_push_swap *push_swap)
{
	t_state		state;
	size_t		max_b_index;
	t_maximum	maximum;

	maximum.m1 = max_a(push_swap);
	maximum.m2 = max_a_before(push_swap, maximum.m1);
	maximum.m3 = max_a_before(push_swap, maximum.m2);
	push_b(push_swap, maximum);
	push_b(push_swap, maximum);
	while (push_swap->a.size > 3)
		push_cheaper_to_b(push_swap, maximum);
	sort_three(push_swap);
	clean_state(&state);
	max_b_index = find_index_b(push_swap, max_b(push_swap));
	calc_rotate(&state, max_b_index, &(push_swap->b));
	exec_state(push_swap, &state, false);
	while (push_swap->b.size != 0)
		pa(push_swap);
}

static void	push_cheaper_to_b(t_push_swap *p, t_maximum m)
{
	size_t	i;
	t_state	current_state;
	t_state	cheaper_state;
	size_t	b_top_element_index;

	i = 0;
	clean_state(&cheaper_state);
	while (i < p->a.size)
	{
		if (p->a.tab[i] == m.m1 || p->a.tab[i] == m.m2 || p->a.tab[i] == m.m3)
		{
			i++;
			continue ;
		}
		clean_state(&current_state);
		calc_rotate(&current_state, i, &(p->a));
		b_top_element_index = find_top_element_b_index(p, p->a.tab[i]);
		calc_rotate(&current_state, b_top_element_index, &(p->b));
		optimize_state(&current_state);
		calc_coast(&current_state);
		if (current_state.coast < cheaper_state.coast)
			copy_state(&current_state, &cheaper_state);
		i++;
	}
	exec_state(p, &cheaper_state, true);
}

static void	push_b(t_push_swap *p, t_maximum m)
{
	size_t	i;
	t_state	current_state;
	t_state	cheaper_state;

	i = 0;
	clean_state(&cheaper_state);
	while (i < p->a.size)
	{
		if (p->a.tab[i] == m.m1 || p->a.tab[i] == m.m2 || p->a.tab[i] == m.m3)
		{
			i++;
			continue ;
		}
		clean_state(&current_state);
		calc_rotate(&current_state, i, &(p->a));
		calc_coast(&current_state);
		if (current_state.coast < cheaper_state.coast)
			copy_state(&current_state, &cheaper_state);
		i++;
	}
	exec_state(p, &cheaper_state, true);
}
