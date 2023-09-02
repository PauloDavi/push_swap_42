/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:47:08 by cobli             #+#    #+#             */
/*   Updated: 2023/09/01 20:30:55 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min(int *array, size_t size);

int	min_a(t_push_swap *push_swap)
{
	return (min(push_swap->b, push_swap->b_size));
}

int	min_b(t_push_swap *push_swap)
{
	return (min(push_swap->b, push_swap->b_size));
}

static int	min(int *array, size_t size)
{
	size_t	i;
	int		min;

	min = array[0];
	i = 1;
	while (i < size)
	{
		if (array[i] < min)
			min = array[i];
		i++;
	}
	return (min);
}
