/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 00:18:10 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_push_swap *p)
{
	ft_printf("sa\n");
	op_sa(p);
}

void	op_sa(t_push_swap *p)
{
	if (p->a_size < 1)
		return ;
	ft_intswap(p->a + p->a_size - 1, p->a + p->a_size - 2);
}
