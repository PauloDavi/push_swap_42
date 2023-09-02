/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:53:44 by cobli             #+#    #+#             */
/*   Updated: 2023/09/02 16:19:00 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_cheaper_to_b(t_push_swap *p);

void	sort(t_push_swap *push_swap)
{
	t_state	state;
	size_t	max_b_index;

	pb(push_swap);
	pb(push_swap);
	while (push_swap->a.size != 0)
		push_cheaper_to_b(push_swap);
	clean_state(&state);
	max_b_index = find_index_b(push_swap, max_b(push_swap));
	calc_rotate(&state, max_b_index, &(push_swap->b));
	exec_state(push_swap, &state);
	while (push_swap->b.size != 0)
		pa(push_swap);
}

static void	push_cheaper_to_b(t_push_swap *p)
{
	size_t	i;
	t_state	current_state;
	t_state	cheaper_state;
	size_t	b_top_element_index;

	i = 0;
	clean_state(&cheaper_state);
	while (i < p->a.size)
	{
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
	exec_state(p, &cheaper_state);
}
