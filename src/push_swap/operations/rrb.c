/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 00:08:28 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_push_swap *p)
{
	ft_printf("rrb\n");
	op_rrb(p);
}

void	op_rrb(t_push_swap *p)
{
	size_t	i;

	if (p->b_size < 1)
		return ;
	i = 0;
	while (++i < p->b_size)
		ft_intswap(p->b + i, p->b + i - 1);
}
