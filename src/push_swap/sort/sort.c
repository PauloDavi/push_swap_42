/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:53:44 by cobli             #+#    #+#             */
/*   Updated: 2023/09/02 00:21:27 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		push_cheaper_to_b(t_push_swap *p);
static size_t	find_top_element_b_index(t_push_swap *p, int a_element);
static void		calc_rotate(t_state *state, size_t index, size_t total_size,
					t_stack_type stack_type);
static void		optimize_state(t_state *state);

void	sort(t_push_swap *push_swap)
{
	pb(push_swap);
	pb(push_swap);
	while (push_swap->a_size > 3)
		push_cheaper_to_b(push_swap);
	sort_three(push_swap);
}

static void	push_cheaper_to_b(t_push_swap *p)
{
	size_t	i;
	t_state	current_state;
	t_state	cheaper_state;

	i = 0;
	clean_state(&cheaper_state);
	while (i < p->a_size)
	{
		clean_state(&current_state);
		calc_rotate(&current_state, i, p->a_size, STACK_A);
		calc_rotate(&current_state, find_top_element_b_index(p, p->a[i]),
				p->b_size, STACK_B);
		optimize_state(&current_state);
		calc_coast(&current_state);
		if (current_state.coast < cheaper_state.coast)
			copy_state(&current_state, &cheaper_state);
		i++;
	}
	exec_state(p, &cheaper_state);
}

static void	optimize_state(t_state *state)
{
	if (state->quants.ra && state->quants.rb)
	{
		if (state->quants.ra < state->quants.rb)
			state->quants.rr = state->quants.ra;
		else
			state->quants.rr = state->quants.rb;
		state->quants.ra -= state->quants.rr;
		state->quants.rb -= state->quants.rr;
	}
	if (state->quants.rra && state->quants.rrb)
	{
		if (state->quants.rra < state->quants.rrb)
			state->quants.rrr = state->quants.rra;
		else
			state->quants.rrr = state->quants.rrb;
		state->quants.rra -= state->quants.rrr;
		state->quants.rrb -= state->quants.rrr;
	}
}

static size_t	find_top_element_b_index(t_push_swap *p, int a_element)
{
	int		i;
	size_t	find_index;
	int		min;
	int		max;

	min = min_b(p);
	max = max_b(p);
	if (a_element < min || a_element > max)
		return (find_index_b(p, max));
	i = a_element - 1;
	while (i >= min)
	{
		find_index = find_index_b(p, i);
		if (find_index != SIZE_MAX)
			return (find_index);
		i--;
	}
	return (find_index);
}

static void	calc_rotate(t_state *state, size_t index, size_t total_size,
		t_stack_type stack_type)
{
	size_t	normalized_max_index;

	if (index == total_size - 1)
		return ;
	normalized_max_index = total_size - (total_size & 1);
	if (index >= normalized_max_index / 2)
	{
		if (stack_type == STACK_A)
			state->quants.ra = total_size - index - 1;
		else
			state->quants.rb = total_size - index - 1;
	}
	else
	{
		if (stack_type == STACK_A)
			state->quants.rra = index + 1;
		else
			state->quants.rrb = index + 1;
	}
}
