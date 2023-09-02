/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:46:56 by cobli             #+#    #+#             */
/*   Updated: 2023/09/02 14:55:45 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_x(t_stack *stack);

int	max_a(t_push_swap *push_swap)
{
	return (max_x(&(push_swap->a)));
}

int	max_b(t_push_swap *push_swap)
{
	return (max_x(&(push_swap->b)));
}

static int	max_x(t_stack *stack)
{
	size_t	i;
	int		max;

	max = stack->tab[0];
	i = 1;
	while (i < stack->size)
	{
		if (stack->tab[i] > max)
			max = stack->tab[i];
		i++;
	}
	return (max);
}
