/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:40:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:47 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	init_push_swap(&push_swap);
	if (argc < 2)
		return (EXIT_SUCCESS);
	parse_args(argc, argv, &push_swap);
	if (check_sorted(&push_swap))
		exit_success(&push_swap);
	if (push_swap.total_size == 1)
		exit_success(&push_swap);
	else if (push_swap.total_size == 2)
		sort_two(&push_swap);
	else if (push_swap.total_size == 3)
		sort_three(&push_swap);
	else
		sort(&push_swap);
	exit_success(&push_swap);
}
