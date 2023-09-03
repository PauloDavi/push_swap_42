/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:58:27 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:21:36 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_sorted(t_push_swap *push_swap)
{
	size_t	i;
	int		nbr;

	i = 1;
	nbr = push_swap->a.tab[0];
	while (i < push_swap->a.size)
	{
		if (nbr < push_swap->a.tab[i])
			return (false);
		nbr = push_swap->a.tab[i++];
	}
	return (true);
}
