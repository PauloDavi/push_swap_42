/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:46:56 by cobli             #+#    #+#             */
/*   Updated: 2023/09/01 20:27:10 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max(int *array, size_t size);

int	max_a(t_push_swap *push_swap)
{
	return (max(push_swap->a, push_swap->a_size));
}

int	max_b(t_push_swap *push_swap)
{
	return (max(push_swap->b, push_swap->b_size));
}

static int	max(int *array, size_t size)
{
	size_t	i;
	int		max;

	max = array[0];
	i = 1;
	while (i < size)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}
	return (max);
}
