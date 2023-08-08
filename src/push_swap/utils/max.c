
#include "push_swap.h"

int	max_a(t_push_swap *push_swap)
{
	size_t	i;
	int		max;

	max = push_swap->a[0];
	i = 1;
	while (i < push_swap->a_size)
	{
		if (push_swap->a[i] > max)
			max = push_swap->a[i];
		i++;
	}
	return (max);
}

int	max_b(t_push_swap *push_swap)
{
	size_t	i;
	int		max;

	max = push_swap->b[0];
	i = 1;
	while (i < push_swap->b_size)
	{
		if (push_swap->b[i] > max)
			max = push_swap->b[i];
		i++;
	}
	return (max);
}
