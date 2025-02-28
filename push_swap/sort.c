/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:27:08 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 16:57:47 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

static void	sort_3(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
		ra(stack_a);
	if ((*stack_a)->next->value > (*stack_a)->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

static void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(*stack_a);
	move_min_to_top(stack_a, min_index);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

static void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(*stack_a);
	move_min_to_top(stack_a, min_index);
	pb(stack_a, stack_b);
	min_index = find_min_index(*stack_a);
	move_min_to_top(stack_a, min_index);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b, int lengt)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *stack_a;
	tmp2 = *stack_b;
	if (lengt == 1)
		return ;
	else if (lengt == 2)
		sa(stack_a);
	else if (lengt == 3)
		sort_3(stack_a);
	else if (lengt == 4)
		sort_4(stack_a, stack_b);
	else
		sort_5(stack_a, stack_b);
}
