/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:45:20 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:30:55 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_push_swap *push_swap)
{
	size_t	min_index_a;
	t_state	state;

	clean_state(&state);
	min_index_a = find_index_a(push_swap, min_a(push_swap));
	calc_rotate(&state, min_index_a, &(push_swap->a));
	exec_state(push_swap, &state, true);
	sort_three(push_swap);
}
