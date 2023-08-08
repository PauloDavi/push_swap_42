/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:41:25 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/08 01:03:52 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "stdlib.h"
# include <stdbool.h>

typedef struct s_push_swap
{
	int		*a;
	int		*b;
	size_t	a_size;
	size_t	b_size;
	size_t	total_size;
}			t_push_swap;

void		exit_error(t_push_swap *push_swap);
void		parse_args(int argc, char **argv, t_push_swap *push_swap);
void		init_push_swap(t_push_swap *push_swap);

// Utils
int			min_a(t_push_swap *push_swap);
int			min_b(t_push_swap *push_swap);
int			max_a(t_push_swap *push_swap);
int			max_b(t_push_swap *push_swap);

// Sort
void		sort_three(t_push_swap *push_swap);
bool		check_sorted(t_push_swap *push_swap);

// Operations
void		sa(t_push_swap *p);
void		op_sa(t_push_swap *p);
void		sb(t_push_swap *p);
void		op_sb(t_push_swap *p);
void		ss(t_push_swap *p);
void		pa(t_push_swap *p);
void		pb(t_push_swap *p);
void		ra(t_push_swap *p);
void		op_ra(t_push_swap *p);
void		rb(t_push_swap *p);
void		op_rb(t_push_swap *p);
void		rr(t_push_swap *p);
void		rra(t_push_swap *p);
void		op_rra(t_push_swap *p);
void		rrb(t_push_swap *p);
void		op_rrb(t_push_swap *p);
void		rrr(t_push_swap *p);

#endif