/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:16:28 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 14:36:34 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	find_index(t_stack *stack, int element);

size_t	find_index_a(t_push_swap *push_swap, int element)
{
	return (find_index(&(push_swap->a), element));
}

size_t	find_index_b(t_push_swap *push_swap, int element)
{
	return (find_index(&(push_swap->b), element));
}

static size_t	find_index(t_stack *stack, int element)
{
	size_t	i;

	i = 0;
	while (i < stack->size)
	{
		if (element == stack->tab[i])
			return (i);
		i++;
	}
	return (SIZE_MAX);
}
