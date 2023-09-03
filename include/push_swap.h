/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:41:25 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/09/02 18:22:45 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdint.h>

typedef enum e_stack_type
{
	STACK_A,
	STACK_B,
}					t_stack_type;

typedef struct s_quants
{
	size_t			ra;
	size_t			rb;
	size_t			rr;
	size_t			rra;
	size_t			rrb;
	size_t			rrr;
}					t_quants;

typedef struct s_maximum
{
	int				m1;
	int				m2;
	int				m3;
}					t_maximum;

typedef struct s_state
{
	size_t			coast;
	t_quants		quants;
}					t_state;

typedef struct s_stack
{
	int				*tab;
	size_t			size;
	t_stack_type	type;
}					t_stack;

typedef struct s_push_swap
{
	t_stack			a;
	t_stack			b;
	size_t			total_size;
}					t_push_swap;

void				printa(t_push_swap *push_swap);
void				printb(t_push_swap *push_swap);

// Main functions
void				exit_error(t_push_swap *push_swap);
void				exit_success(t_push_swap *push_swap);
void				parse_args(int argc, char **argv, t_push_swap *push_swap);
void				init_push_swap(t_push_swap *push_swap);

// Utils
int					min_a(t_push_swap *push_swap);
int					min_b(t_push_swap *push_swap);
int					max_a(t_push_swap *push_swap);
int					max_b(t_push_swap *push_swap);
int					max_a_before(t_push_swap *push_swap, int max);
size_t				find_index_a(t_push_swap *push_swap, int element);
size_t				find_index_b(t_push_swap *push_swap, int element);
void				calc_coast(t_state *current_state);
size_t				find_top_element_b_index(t_push_swap *p, int a_element);
void				calc_rotate(t_state *state, size_t index, t_stack *stack);
void				optimize_state(t_state *state);
void				clean_state(t_state *state);
void				copy_state(t_state *previous_state, t_state *next_state);
void				exec_state(t_push_swap *p, t_state *state, bool with_push);

// Sort
bool				check_sorted(t_push_swap *push_swap);
void				sort_two(t_push_swap *push_swap);
void				sort_three(t_push_swap *push_swap);
void				sort(t_push_swap *push_swap);

// Operations
void				sa(t_push_swap *p);
void				op_sa(t_push_swap *p);
void				sb(t_push_swap *p);
void				op_sb(t_push_swap *p);
void				ss(t_push_swap *p);
void				pa(t_push_swap *p);
void				pb(t_push_swap *p);
void				ra(t_push_swap *p);
void				op_ra(t_push_swap *p);
void				rb(t_push_swap *p);
void				op_rb(t_push_swap *p);
void				rr(t_push_swap *p);
void				rra(t_push_swap *p);
void				op_rra(t_push_swap *p);
void				rrb(t_push_swap *p);
void				op_rrb(t_push_swap *p);
void				rrr(t_push_swap *p);

#endif