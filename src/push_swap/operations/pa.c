/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:34:01 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 00:43:09 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_push_swap *p)
{
	ft_printf("pa\n");
	if (p->b_size == 0 || p->a_size == p->total_size)
		return ;
	p->a[p->a_size] = p->b[p->b_size - 1];
	p->a_size++;
	p->b_size--;
}
