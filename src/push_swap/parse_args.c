/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:44:28 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 16:25:29 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	create_stack(t_push_swap *push_swap, char **numbers);
static int	atoi_error(const char *nptr, t_push_swap *push_swap);
static void	verify_dup(t_push_swap *push_swap);

void	parse_args(int argc, char **argv, t_push_swap *push_swap)
{
	char	**numbers;

	if (argc == 2)
	{
		if (argv[1][0] == '\0')
			exit_error(push_swap);
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
	verify_dup(push_swap);
}

static bool	create_stack(t_push_swap *push_swap, char **numbers)
{
	size_t	i;

	push_swap->a.tab = malloc(sizeof(int) * push_swap->total_size);
	if (push_swap->a.tab == NULL)
		return (false);
	push_swap->b.tab = malloc(sizeof(int) * push_swap->total_size);
	if (push_swap->b.tab == NULL)
	{
		free(push_swap->a.tab);
		return (false);
	}
	i = push_swap->total_size;
	while (i--)
	{
		if (ft_strlen(*(numbers)) == 0)
			return (false);
		push_swap->a.tab[i] = atoi_error(*(numbers++), push_swap);
	}
	push_swap->a.size = push_swap->total_size;
	push_swap->b.size = 0;
	return (true);
}

static void	verify_dup(t_push_swap *push_swap)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < push_swap->a.size - 1)
	{
		j = i + 1;
		while (j < push_swap->a.size)
			if (push_swap->a.tab[i] == push_swap->a.tab[j++])
				exit_error(push_swap);
		i++;
	}
}

static int	atoi_error(const char *nptr, t_push_swap *push_swap)
{
	size_t	i;
	long	number;
	int		multiplier;

	i = 0;
	number = 0;
	multiplier = 1;
	while (nptr[i] != '\0' && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '\0')
		return (number);
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			multiplier *= -1;
	while (nptr[i] != '\0')
	{
		if (!ft_isdigit(nptr[i]))
			exit_error(push_swap);
		number = (number * 10) + (nptr[i++] - '0');
	}
	if ((multiplier * number) > INT_MAX || (multiplier * number) < INT_MIN)
		exit_error(push_swap);
	return (number * multiplier);
}
