/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 00:20:28 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push_swap *p)
{
	ft_printf("ra\n");
	op_ra(p);
}

void	op_ra(t_push_swap *p)
{
	size_t	i;

	if (p->a_size < 1)
		return ;
	i = p->a_size;
	while (--i > 0)
		ft_intswap(p->a + i, p->a + i - 1);
}
