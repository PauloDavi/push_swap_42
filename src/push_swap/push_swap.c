/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:40:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 16:20:50 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printa(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->a.size < 1)
		return ;
	i = push_swap->a.size - 1;
	while (i >= 0)
	{
		ft_printf("a[%d]: %d\n", i, push_swap->a.tab[i]);
		i--;
	}
	ft_printf("\n");
}

void	printb(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->b.size < 1)
		return ;
	i = push_swap->b.size;
	while (--i >= 0)
		ft_printf("b[%d]: %d\n", i, push_swap->b.tab[i]);
	ft_printf("\n");
}

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
