/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrx_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:32 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	op_rrx(t_stack *stack);

void	rra(t_push_swap *p)
{
	op_rrx(&(p->a));
}

void	rrb(t_push_swap *p)
{
	op_rrx(&(p->b));
}

void	rrr(t_push_swap *p)
{
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
