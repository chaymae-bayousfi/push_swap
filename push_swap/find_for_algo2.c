/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_for_algo2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:43:58 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 16:53:16 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max_value(t_stack *stack_b)
{
	int	max;

	max = stack_b->value;
	while (stack_b)
	{
		if (stack_b->value > max)
			max = stack_b->value;
		stack_b = stack_b->next;
	}
	return (max);
}

static int	find_max_position(t_stack *stack_b, int max)
{
	int	pos;

	pos = 0;
	while (stack_b)
	{
		if (stack_b->value == max)
			break ;
		pos++;
		stack_b = stack_b->next;
	}
	return (pos);
}

static int	find_distance_to_end(t_stack *stack_b, int pos)
{
	int	length;

	length = 0;
	while (stack_b)
	{
		length++;
		stack_b = stack_b->next;
	}
	return (length - pos);
}

static void	move_max_to_top(t_stack **stack_b, int length1, int length2)
{
	if (length1 < length2)
	{
		while (length1 > 0)
		{
			ft_rotate(stack_b);
			write(1, "rb\n", 3);
			length1--;
		}
	}
	else
	{
		while (length2 > 0)
		{
			ft_reverse_rotate(stack_b);
			write(1, "rrb\n", 4);
			length2--;
		}
	}
}

void	find_max_and_puch(t_stack **stack_a, t_stack **stack_b)
{
	int	max;
	int	length1;
	int	length2;

	max = find_max_value(*stack_b);
	length1 = find_max_position(*stack_b, max);
	length2 = find_distance_to_end(*stack_b, length1);
	move_max_to_top(stack_b, length1, length2);
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}
