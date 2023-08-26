/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:16:28 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/26 15:20:27 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_index_a(t_push_swap *push_swap, int element)
{
	size_t	i;

	i = 0;
	while (i < push_swap->a_size)
	{
		if (element == push_swap->a[i])
			return (i);
		i++;
	}
	return (SIZE_MAX);
}

size_t	find_index_b(t_push_swap *push_swap, int element)
{
	size_t	i;

	i = 0;
	while (i < push_swap->b_size)
	{
		if (element == push_swap->b[i])
			return (i);
		i++;
	}
	return (SIZE_MAX);
}
