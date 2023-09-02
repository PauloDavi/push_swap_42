/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:47:08 by cobli             #+#    #+#             */
/*   Updated: 2023/09/02 15:08:37 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min_x(t_stack *stack);

int	min_a(t_push_swap *push_swap)
{
	return (min_x(&(push_swap->a)));
}

int	min_b(t_push_swap *push_swap)
{
	return (min_x(&(push_swap->b)));
}

static int	min_x(t_stack *stack)
{
	size_t	i;
	int		min;

	min = stack->tab[0];
	i = 1;
	while (i < stack->size)
	{
		if (stack->tab[i] < min)
			min = stack->tab[i];
		i++;
	}
	return (min);
}
