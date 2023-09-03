/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rx_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:34 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	op_rx(t_stack *stack);

void	ra(t_push_swap *p)
{
	op_rx(&(p->a));
}

void	rb(t_push_swap *p)
{
	op_rx(&(p->b));
}

void	rr(t_push_swap *p)
{
	op_rx(&(p->a));
	op_rx(&(p->b));
}

static void	op_rx(t_stack *stack)
{
	size_t	i;

	if (stack->size < 1)
		return ;
	i = stack->size;
	while (--i > 0)
		ft_intswap((stack->tab + i), (stack->tab + i - 1));
}
