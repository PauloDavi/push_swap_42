/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erros.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:25:47 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/07 23:41:12 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(t_push_swap *push_swap)
{
	if (push_swap->a != NULL)
		free(push_swap->a);
	if (push_swap->a != NULL)
		free(push_swap->b);
	ft_putstr_fd("Error\n", STDOUT_FILENO);
	exit(EXIT_FAILURE);
}
