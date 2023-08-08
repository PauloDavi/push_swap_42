/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:44:28 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/07 23:47:39 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	create_stack(t_push_swap *push_swap, char **numbers);

void	parse_args(int argc, char **argv, t_push_swap *push_swap)
{
	char	**numbers;

	if (argc == 2)
	{
		numbers = ft_split_size(argv[1], ' ', &(push_swap->total_size));
		if (!create_stack(push_swap, numbers))
		{
			ft_free_split(numbers);
			exit_error(push_swap);
		}
		ft_free_split(numbers);
	}
	else
	{
		push_swap->total_size = argc - 1;
		numbers = argv + 1;
		if (!create_stack(push_swap, numbers))
			exit_error(push_swap);
	}
}

static bool	create_stack(t_push_swap *push_swap, char **numbers)
{
	size_t	i;

	push_swap->a = malloc(sizeof(int) * push_swap->total_size);
	if (push_swap->a == NULL)
		return (false);
	push_swap->b = malloc(sizeof(int) * push_swap->total_size);
	if (push_swap->b == NULL)
	{
		free(push_swap->a);
		return (false);
	}
	i = push_swap->total_size;
	while (i--)
		push_swap->a[i] = ft_atoi(*(numbers++));
	push_swap->a_size = push_swap->total_size;
	push_swap->b_size = 0;
	return (true);
}
