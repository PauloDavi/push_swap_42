/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:40:14 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 01:04:19 by pdavi-al         ###   ########.fr       */
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
	sort_three(&push_swap);
	printa(&push_swap);
	free(push_swap.a);
	free(push_swap.b);
	return (0);
}
