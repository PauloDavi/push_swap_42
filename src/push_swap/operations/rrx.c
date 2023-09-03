/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:21:36 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_rrx(t_stack *stack);

void	rra(t_push_swap *p)
{
	ft_printf("rra\n");
	op_rrx(&(p->a));
}

void	rrb(t_push_swap *p)
{
	ft_printf("rrb\n");
	op_rrx(&(p->b));
}

void	rrr(t_push_swap *p)
{
	ft_printf("rrr\n");
	op_rrx(&(p->a));
	op_rrx(&(p->b));
}

static void	op_rrx(t_stack *stack)
{
	size_t	i;

	if (stack->size < 1)
		return ;
	i = 0;
	while (++i < stack->size)
		ft_intswap((stack->tab + i), (stack->tab + i - 1));
}
