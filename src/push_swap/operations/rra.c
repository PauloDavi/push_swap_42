/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 00:20:56 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_push_swap *p)
{
	ft_printf("rra\n");
	op_rra(p);
}

void	op_rra(t_push_swap *p)
{
	size_t	i;

	if (p->a_size < 1)
		return ;
	i = 0;
	while (++i < p->a_size)
		ft_intswap(p->a + i, p->a + i - 1);
}
