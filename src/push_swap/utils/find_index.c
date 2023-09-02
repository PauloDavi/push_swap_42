/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:16:28 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/01 20:31:21 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	find_index(int *array, int element, size_t total_size);

size_t	find_index_a(t_push_swap *push_swap, int element)
{
	return (find_index(push_swap->a, element, push_swap->a_size));
}

size_t	find_index_b(t_push_swap *push_swap, int element)
{
	return (find_index(push_swap->b, element, push_swap->b_size));
}

static size_t	find_index(int *array, int element, size_t total_size)
{
	size_t	i;

	i = 0;
	while (i < total_size)
	{
		if (element == array[i])
			return (i);
		i++;
	}
	return (SIZE_MAX);
}
