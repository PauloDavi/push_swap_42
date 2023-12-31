/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_state.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:52:35 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:58 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_state(t_push_swap *p, t_state *state, bool with_push)
{
	if (state->quants.rr)
		while (state->quants.rr--)
			rr(p);
	if (state->quants.rrr)
		while (state->quants.rrr--)
			rrr(p);
	if (state->quants.ra)
		while (state->quants.ra--)
			ra(p);
	if (state->quants.rb)
		while (state->quants.rb--)
			rb(p);
	if (state->quants.rra)
		while (state->quants.rra--)
			rra(p);
	if (state->quants.rrb)
		while (state->quants.rrb--)
			rrb(p);
	if (with_push)
		pb(p);
}
