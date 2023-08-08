/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:58:27 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 01:10:21 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_sorted(t_push_swap *push_swap)
{
	size_t	i;
	int		nbr;

	i = 1;
	nbr = push_swap->a[0];
	while (i < push_swap->a_size)
	{
		if (nbr < push_swap->a[i])
			return (false);
		nbr = push_swap->a[i++];
	}
	return (true);
}
