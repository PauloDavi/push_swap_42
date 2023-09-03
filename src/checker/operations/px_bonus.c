/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:30 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	px(t_stack *stack1, t_stack *stack2, size_t total_size);

void	pa(t_push_swap *p)
{
	px(&(p->a), &(p->b), p->total_size);
}

void	pb(t_push_swap *p)
{
	px(&(p->b), &(p->a), p->total_size);
}

static void	px(t_stack *stack1, t_stack *stack2, size_t total_size)
{
	if (stack2->size == 0 || stack1->size == total_size)
		return ;
	stack1->tab[stack1->size] = stack2->tab[stack2->size - 1];
	stack1->size++;
	stack2->size--;
}
