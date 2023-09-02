/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 13:37:17 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_sx(t_stack *stack);

void	sa(t_push_swap *p)
{
	ft_printf("sa\n");
	op_sx(&(p->a));
}

void	sb(t_push_swap *p)
{
	ft_printf("sb\n");
	op_sx(&(p->b));
}

void	ss(t_push_swap *p)
{
	ft_printf("ss\n");
	op_sx(&(p->a));
	op_sx(&(p->b));
}

static void	op_sx(t_stack *stack)
{
	if (stack->size < 1)
		return ;
	ft_intswap((stack->tab + stack->size - 1), (stack->tab + stack->size - 2));
}
