/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:45:20 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 01:16:02 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_push_swap *push_swap)
{
	int	min;
	int	max;

	if (check_sorted(push_swap))
		return ;
	min = min_a(push_swap);
	max = max_a(push_swap);
	if (min == push_swap->a[push_swap->a_size - 1])
	{
		rra(push_swap);
		sa(push_swap);
	}
	else if (max == push_swap->a[push_swap->a_size - 1])
	{
		ra(push_swap);
		if (!check_sorted(push_swap))
			sa(push_swap);
	}
	else
	{
		if (push_swap->a[1] == max)
			rra(push_swap);
		else
			sa(push_swap);
	}
}
