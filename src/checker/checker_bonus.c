/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:40:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:24:01 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	exec_cmd(t_push_swap *push_swap, char *cmd);
static void	executing(t_push_swap *push_swap);

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	init_push_swap(&push_swap);
	if (argc < 2)
		return (EXIT_SUCCESS);
	parse_args(argc, argv, &push_swap);
	executing(&push_swap);
	exit_success(&push_swap);
}

static void	exec_cmd(t_push_swap *push_swap, char *cmd)
{
	if (!ft_strncmp(cmd, "ra\n", 3))
		ra(push_swap);
	else if (!ft_strncmp(cmd, "rb\n", 3))
		rb(push_swap);
	else if (!ft_strncmp(cmd, "rr\n", 3))
		rr(push_swap);
	else if (!ft_strncmp(cmd, "rra\n", 4))
		rra(push_swap);
	else if (!ft_strncmp(cmd, "rrb\n", 4))
		rrb(push_swap);
	else if (!ft_strncmp(cmd, "rrr\n", 4))
		rrr(push_swap);
	else if (!ft_strncmp(cmd, "sa\n", 3))
		sa(push_swap);
	else if (!ft_strncmp(cmd, "sb\n", 3))
		sb(push_swap);
	else if (!ft_strncmp(cmd, "ss\n", 3))
		ss(push_swap);
	else if (!ft_strncmp(cmd, "pa\n", 3))
		pa(push_swap);
	else if (!ft_strncmp(cmd, "pb\n", 3))
		pb(push_swap);
	else
		exit_error_and_free_cmd(push_swap, cmd);
}

static void	executing(t_push_swap *push_swap)
{
	char	*cmd;

	while (true)
	{
		cmd = get_next_line(STDIN_FILENO);
		if (cmd == NULL)
			break ;
		exec_cmd(push_swap, cmd);
		free(cmd);
	}
	if (check_sorted(push_swap) && push_swap->b.size == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
