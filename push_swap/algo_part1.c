/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_part1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:00:54 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/26 11:14:03 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stacksize(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

static int	ft_mini_sort(t_stack *list)
{
	int		count;
	t_stack	*current;

	count = 0;
	current = list;
	while (current && current->next)
	{
		if (current->value - current->next->value >= 2
			&& current->value - current->next->value <= 4)
			count++;
		current = current->next;
	}
	return (count >= 20 && count <= 498);
}

static int	chose_range(int length)
{
	if (length > 100)
		return (32);
	else
		return (14);
}

static void	init_first_part(t_stack **stack_a, int *i, int *length, int *range)
{
	*i = 0;
	*length = ft_stacksize(*stack_a);
	*range = chose_range(*length);
}

void	first_part(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	length;
	int	range;

	init_first_part(stack_a, &i, &length, &range);
	while (length > 0)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			i++;
			length--;
		}
		else if ((*stack_a)->index <= (i + range))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
			length--;
		}
		else if (ft_mini_sort(*stack_a))
			rra(stack_a);
		else
			ra(stack_a);
	}
}
