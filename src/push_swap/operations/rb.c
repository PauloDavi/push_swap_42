/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 00:20:18 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_push_swap *p)
{
	ft_printf("rb\n");
	op_rb(p);
}

void	op_rb(t_push_swap *p)
{
	size_t	i;

	if (p->b_size < 1)
		return ;
	i = p->b_size;
	while (--i > 0)
		ft_intswap(p->b + i, p->b + i - 1);
}
