/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 13:34:37 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_rx(t_stack *stack);

void	ra(t_push_swap *p)
{
	ft_printf("ra\n");
	op_rx(&(p->a));
}

void	rb(t_push_swap *p)
{
	ft_printf("rb\n");
	op_rx(&(p->b));
}

void	rr(t_push_swap *p)
{
	ft_printf("rr\n");
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
