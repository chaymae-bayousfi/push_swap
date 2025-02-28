/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:47:49 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 13:16:22 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack)
{
	ft_swap(stack);
	write(1, "sa\n", 3);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	ra(t_stack **stack)
{
	ft_rotate(stack);
	write(1, "ra\n", 3);
}

void	rra(t_stack **stack)
{
	ft_reverse_rotate(stack);
	write(1, "rra\n", 4);
}
