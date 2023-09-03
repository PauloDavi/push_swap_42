/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:41:25 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/03 17:20:26 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdint.h>

typedef struct s_stack
{
	int		*tab;
	size_t	size;
}			t_stack;

typedef struct s_push_swap
{
	t_stack	a;
	t_stack	b;
	size_t	total_size;
}			t_push_swap;

// Main functions
void		exit_error(t_push_swap *push_swap);
void		exit_success(t_push_swap *push_swap);
void		parse_args(int argc, char **argv, t_push_swap *push_swap);
void		init_push_swap(t_push_swap *push_swap);
void		exit_error_and_free_cmd(t_push_swap *push_swap, char *cmd);

// Sort
bool		check_sorted(t_push_swap *push_swap);

// Operations
void		sa(t_push_swap *p);
void		sb(t_push_swap *p);
void		ss(t_push_swap *p);
void		pa(t_push_swap *p);
void		pb(t_push_swap *p);
void		ra(t_push_swap *p);
void		rb(t_push_swap *p);
void		rr(t_push_swap *p);
void		rra(t_push_swap *p);
void		rrb(t_push_swap *p);
void		rrr(t_push_swap *p);

#endif