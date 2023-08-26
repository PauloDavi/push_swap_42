/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavi-al <pdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:41:25 by pdavi-al          #+#    #+#             */
/*   Updated: 2023/08/26 16:15:16 by pdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "stdlib.h"
# include <limits.h>
# include <stdbool.h>
# include <stdint.h>

typedef enum e_stack_type
{
	STACK_A,
	STACK_B,
}				t_stack_type;

typedef struct s_quants
{
	size_t		ra;
	size_t		rb;
	size_t		rr;
	size_t		rra;
	size_t		rrb;
	size_t		rrr;
}				t_quants;

typedef struct s_state
{
	size_t		coast;
	t_quants	quants;
}				t_state;

typedef struct s_push_swap
{
	int			*a;
	int			*b;
	size_t		a_size;
	size_t		b_size;
	size_t		total_size;
}				t_push_swap;

void			printa(t_push_swap *push_swap);
void			printb(t_push_swap *push_swap);

void			exit_error(t_push_swap *push_swap);
void			parse_args(int argc, char **argv, t_push_swap *push_swap);
void			init_push_swap(t_push_swap *push_swap);
void			clean_state(t_state *state);
void			copy_state(t_state *previous_state, t_state *next_state);
void			exec_state(t_push_swap *p, t_state *state);

// Utils
int				min_a(t_push_swap *push_swap);
int				min_b(t_push_swap *push_swap);
int				max_a(t_push_swap *push_swap);
int				max_b(t_push_swap *push_swap);
size_t			find_index_a(t_push_swap *push_swap, int element);
size_t			find_index_b(t_push_swap *push_swap, int element);
void			calc_coast(t_state *current_state);

// Sort
bool			check_sorted(t_push_swap *push_swap);
void			sort_two(t_push_swap *push_swap);
void			sort_three(t_push_swap *push_swap);
void			sort(t_push_swap *push_swap);

// Operations
void			sa(t_push_swap *p);
void			op_sa(t_push_swap *p);
void			sb(t_push_swap *p);
void			op_sb(t_push_swap *p);
void			ss(t_push_swap *p);
void			pa(t_push_swap *p);
void			pb(t_push_swap *p);
void			ra(t_push_swap *p);
void			op_ra(t_push_swap *p);
void			rb(t_push_swap *p);
void			op_rb(t_push_swap *p);
void			rr(t_push_swap *p);
void			rra(t_push_swap *p);
void			op_rra(t_push_swap *p);
void			rrb(t_push_swap *p);
void			op_rrb(t_push_swap *p);
void			rrr(t_push_swap *p);

#endif