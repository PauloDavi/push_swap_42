/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:47:08 by cobli             #+#    #+#             */
/*   Updated: 2023/08/13 23:47:11 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_a(t_push_swap *push_swap)
{
	size_t	i;
	int		min;

	min = push_swap->a[0];
	i = 1;
	while (i < push_swap->a_size)
	{
		if (push_swap->a[i] < min)
			min = push_swap->a[i];
		i++;
	}
	return (min);
}

int	min_b(t_push_swap *push_swap)
{
	size_t	i;
	int		min;

	min = push_swap->b[0];
	i = 1;
	while (i < push_swap->b_size)
	{
		if (push_swap->b[i] < min)
			min = push_swap->b[i];
		i++;
	}
	return (min);
}
