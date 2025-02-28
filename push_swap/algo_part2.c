/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:43:49 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 11:12:25 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	second_part(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		size;

	tmp = *stack_b;
	size = ft_stacksize(*stack_b);
	while (size > 0)
	{
		find_max_and_puch(stack_a, stack_b);
		size--;
	}
}
