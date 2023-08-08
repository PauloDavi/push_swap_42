/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:42:04 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/07 23:45:17 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_push_swap *push_swap)
{
	push_swap->a = NULL;
	push_swap->b = NULL;
	push_swap->a_size = 0;
	push_swap->b_size = 0;
	push_swap->total_size = 0;
}
