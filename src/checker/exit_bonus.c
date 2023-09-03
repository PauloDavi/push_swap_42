/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:25:47 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:37 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	exit_error(t_push_swap *push_swap)
{
	if (push_swap->a.tab != NULL)
		free(push_swap->a.tab);
	if (push_swap->a.tab != NULL)
		free(push_swap->b.tab);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	exit_error_and_free_cmd(t_push_swap *push_swap, char *cmd)
{
	free(cmd);
	exit_error(push_swap);
}

void	exit_success(t_push_swap *push_swap)
{
	if (push_swap->a.tab != NULL)
		free(push_swap->a.tab);
	if (push_swap->a.tab != NULL)
		free(push_swap->b.tab);
	exit(EXIT_SUCCESS);
}
