/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobli <cobli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:40:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/11 00:26:58 by cobli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printa(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->a_size < 1)
		return ;
	i = push_swap->a_size - 1;
	while (i >= 0)
	{
		ft_printf("a[%d]: %d\n", i, push_swap->a[i]);
		i--;
	}
	ft_printf("\n");
}

void	printb(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->b_size < 1)
		return ;
	i = push_swap->b_size;
	while (--i >= 0)
		ft_printf("b[%d]: %d\n", i, push_swap->b[i]);
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	init_push_swap(&push_swap);
	if (argc < 2)
		exit_error(&push_swap);
	parse_args(argc, argv, &push_swap);
	if (push_swap.total_size == 1)
		return (EXIT_SUCCESS);
	else if (push_swap.total_size == 2)
		sort_two(&push_swap);
	else if (push_swap.total_size == 3)
		sort_three(&push_swap);
	else
		sort(&push_swap);
	printa(&push_swap);
	free(push_swap.a);
	free(push_swap.b);
	return (EXIT_SUCCESS);
}
