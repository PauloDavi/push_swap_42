/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_top_element_b_index.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:59:31 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:56 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_top_element_b_index(t_push_swap *p, int a_element)
{
	int		i;
	size_t	find_index;
	int		min;
	int		max;

	min = min_b(p);
	max = max_b(p);
	if (a_element < min || a_element > max)
		return (find_index_b(p, max));
	i = a_element - 1;
	while (i >= min)
	{
		find_index = find_index_b(p, i);
		if (find_index != SIZE_MAX)
			return (find_index);
		i--;
	}
	return (find_index);
}
