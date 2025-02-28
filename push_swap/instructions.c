/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:41:53 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 11:19:39 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack)->next || !*stack)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	ft_push(t_stack **stack1, t_stack **stack2)
{
	t_stack	*tmp;

	if (!*stack1 || !stack1)
		return ;
	tmp = *stack1;
	add_stack_lifo(tmp->value, stack2);
	*stack1 = tmp->next;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp1 = *stack;
	*stack = (*stack)->next;
	tmp2 = *stack;
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp1;
	tmp1->next = NULL;
}

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp1 = *stack;
	while (tmp1->next)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp1->next = *stack;
	*stack = tmp1;
	tmp2->next = NULL;
}
