/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:42:04 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:38 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_push_swap(t_push_swap *push_swap)
{
	push_swap->a.tab = NULL;
	push_swap->b.tab = NULL;
	push_swap->a.size = 0;
	push_swap->b.size = 0;
	push_swap->total_size = 0;
}
