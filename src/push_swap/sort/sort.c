/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:53:44 by cobli             #+#    #+#             */
/*   Updated: 2023/08/26 16:19:06 by pdavi-al         ###   ########.fr       */
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
		printa(p);
		printb(p);
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
	else if (state->quants.rra && state->quants.rrb)
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
	size_t	i;
	size_t	previous_element;
	int		min;

	min = min_b(p);
	if (a_element < min || a_element > max_b(p))
		return (find_index_b(p, min));
	i = 0;
	while (i < p->b_size)
	{
		previous_element = i - 1;
		if (i == 0)
			previous_element = p->b_size - 1;
		if (a_element > p->b[i] || a_element < p->b[previous_element])
			break ;
		i++;
	}
	return (i);
}

static void	calc_rotate(t_state *state, size_t index, size_t total_size,
		t_stack_type stack_type)
{
	size_t	normalized_total_size;

	normalized_total_size = total_size + (total_size & 1);
	if (index < normalized_total_size / 2)
	{
		if (stack_type == STACK_A)
			state->quants.ra = index;
		else
			state->quants.rb = index;
	}
	else
	{
		if (stack_type == STACK_A)
			state->quants.rra = total_size - index;
		else
			state->quants.rrb = total_size - index;
	}
}
