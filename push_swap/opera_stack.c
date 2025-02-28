/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opera_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:47:16 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 14:42:57 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_stack_lifo(int value, t_stack **stack)
{
	t_stack	*new;

	new = ft_malloc(sizeof(t_stack));
	new->value = value;
	new->next = *stack;
	*stack = new;
	index_stack(*stack);
}

void	add_stack(int value, t_stack **stack)
{
	t_stack	*new;
	t_stack	*tmp;

	if (test_duplicate(value, *stack))
		error();
	new = ft_malloc(sizeof(t_stack));
	if (!*(stack))
	{
		new->value = value;
		*stack = new;
		new->next = NULL;
	}
	else
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp ->next;
		new->value = value;
		tmp->next = new;
		new->next = NULL;
	}
	index_stack(*stack);
}

void	index_stack(t_stack *stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	int		index;

	tmp1 = stack;
	while (tmp1)
	{
		index = 0;
		tmp2 = stack;
		while (tmp2)
		{
			if (tmp2->value < tmp1->value)
				index++;
			tmp2 = tmp2->next;
		}
		tmp1->index = index;
		tmp1 = tmp1->next;
	}
}

void	error(void)
{
	write(2, "Error\n", 6);
	ft_exit(1);
}
