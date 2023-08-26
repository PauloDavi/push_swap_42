/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_coast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:40:31 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/26 15:58:53 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_coast(t_state *current_state)
{
	current_state->coast = current_state->quants.ra + current_state->quants.rb
		+ current_state->quants.rr + current_state->quants.rra
		+ current_state->quants.rrb + current_state->quants.rrr;
}
