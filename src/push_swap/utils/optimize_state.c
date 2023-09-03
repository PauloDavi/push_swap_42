/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_state.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:01:24 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 17:34:01 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	optimize_state(t_state *state)
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
