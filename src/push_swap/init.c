/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:42:04 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 14:32:47 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_push_swap *push_swap)
{
	push_swap->a.tab = NULL;
	push_swap->b.tab = NULL;
	push_swap->a.size = 0;
	push_swap->b.size = 0;
	push_swap->a.type = STACK_A;
	push_swap->b.type = STACK_B;
	push_swap->total_size = 0;
}

void	clean_state(t_state *state)
{
	state->coast = SIZE_MAX;
	state->quants.ra = 0;
	state->quants.rb = 0;
	state->quants.rr = 0;
	state->quants.rra = 0;
	state->quants.rrb = 0;
	state->quants.rrr = 0;
}

void	copy_state(t_state *previous_state, t_state *next_state)
{
	next_state->coast = previous_state->coast;
	next_state->quants.ra = previous_state->quants.ra;
	next_state->quants.rb = previous_state->quants.rb;
	next_state->quants.rr = previous_state->quants.rr;
	next_state->quants.rra = previous_state->quants.rra;
	next_state->quants.rrb = previous_state->quants.rrb;
	next_state->quants.rrr = previous_state->quants.rrr;
}
