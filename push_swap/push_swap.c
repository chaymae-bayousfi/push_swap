/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:20:12 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 16:57:03 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_input(char *arg, t_stack **stack)
{
	char	**str;
	int		j;

	j = 0;
	str = ft_split(arg, ' ');
	while (str[j])
	{
		if (test_number(str[j]))
			error();
		add_stack(ft_atoi(str[j]), stack);
		j++;
	}
}

static void	initialize_stacks(int ac, char **av, t_stack **stack_a)
{
	int	i;

	i = 1;
	if (ac < 2)
		exit(0);
	while (av[i])
	{
		if (test_empty(av[i]))
			error();
		parse_input(av[i], stack_a);
		i++;
	}
}

static void	sort_stacks(t_stack **stack_a, t_stack **stack_b)
{
	int	lengt;

	lengt = ft_stacksize(*stack_a);
	if (!is_sorted(*stack_a))
	{
		if (lengt <= 5)
			ft_sort(stack_a, stack_b, lengt);
		else
		{
			first_part(stack_a, stack_b);
			second_part(stack_a, stack_b);
		}
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	initialize_stacks(ac, av, &stack_a);
	sort_stacks(&stack_a, &stack_b);
	ft_exit(0);
	return (0);
}
