/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:00:31 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:59 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_rotate(t_state *state, size_t index, t_stack *stack)
{
	size_t	normalized_max_index;

	if (index == stack->size - 1)
		return ;
	normalized_max_index = stack->size - (stack->size & 1);
	if (index >= normalized_max_index / 2)
	{
		if (stack->type == STACK_A)
			state->quants.ra = stack->size - index - 1;
		else
			state->quants.rb = stack->size - index - 1;
	}
	else
	{
		if (stack->type == STACK_A)
			state->quants.rra = index + 1;
		else
			state->quants.rrb = index + 1;
	}
}
