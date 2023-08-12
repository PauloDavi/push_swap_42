/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:53:44 by cobli             #+#    #+#             */
/*   Updated: 2023/08/13 23:52:17 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_push_swap *push_swap)
{
	int	top_b;
	int	min;

	while (push_swap->a_size > 3)
	{
		if (push_swap->a[push_swap->a_size - 1] == min_a(push_swap))
			pb(push_swap);
		else
			ra(push_swap);
	}
	sort_three(push_swap);
	while (push_swap->b_size != 0)
	{
		top_b = push_swap->b[push_swap->b_size - 1];
		min = min_a(push_swap);
		if (top_b < min)
		{
			if (min == push_swap->a[push_swap->a_size - 1])
				pa(push_swap);
			else
				ra(push_swap);
		}
		else
		{
			if (top_b < push_swap->a[push_swap->a_size - 1]
				&& top_b > push_swap->a[0])
				pa(push_swap);
			else
				ra(push_swap);
		}
	}
}
