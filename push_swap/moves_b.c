/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:48:05 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 11:04:09 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	rb(t_stack **stack)
{
	ft_rotate(stack);
	write(1, "rb\n", 3);
}

void	rrb(t_stack **stack)
{
	ft_reverse_rotate(stack);
	write(1, "rrb\n", 4);
}
