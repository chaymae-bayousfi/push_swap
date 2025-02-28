/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_for_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:01:20 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 14:41:09 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *stack)
{
	int		min;
	int		index;
	int		i;
	t_stack	*tmp;

	tmp = stack;
	min = tmp->value;
	index = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

void	move_min_to_top(t_stack **stack, int min_index)
{
	int	size;

	size = ft_stacksize(*stack);
	if (min_index <= size / 2)
	{
		while (min_index-- > 0)
			ra(stack);
	}
	else
	{
		while (min_index++ < size)
			rra(stack);
	}
}
