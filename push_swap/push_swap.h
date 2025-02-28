/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:28:38 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/26 10:04:00 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct t_stack
{
	int				value;
	int				index;
	struct t_stack	*next;
}	t_stack;

// free
void	*ft_malloc(size_t i);
void	ft_exit(int n);

//add_func
int		ft_isdigit(int c);
int		ft_atoi(const char	*str);
char	**ft_split(char const *s, char c);

void	error(void);
//opera_stack
void	add_stack(int value, t_stack **stack);
void	index_stack(t_stack *stack);
int		ft_stacksize(t_stack *stack);
void	add_stack_lifo(int value, t_stack **stack);

//test functions
int		test_number(char *av);
int		test_duplicate(int c, t_stack *stack);
int		test_empty(char *av);

//instractions
void	ft_swap(t_stack **stack);
void	ft_push(t_stack **stack1, t_stack **stack2);
void	ft_rotate(t_stack **stack);
void	ft_reverse_rotate(t_stack **stack);
//algo
void	first_part(t_stack **stack_a, t_stack **stack_b);
void	second_part(t_stack **stack_a, t_stack **stack_b);
void	find_max_and_puch(t_stack **stack_a, t_stack **stack_b);

//moves
void	sa(t_stack **stack);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
//sort
int		find_min_index(t_stack *stack);
void	ft_sort(t_stack **stack_a, t_stack **stack_b, int lengt);
int		is_sorted(t_stack *stack);
void	move_min_to_top(t_stack **stack, int min_index);
#endif