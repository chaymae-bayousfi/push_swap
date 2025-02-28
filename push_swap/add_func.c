/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:43:33 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 11:18:14 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	check_atoi(int signe, long long c)
{
	if ((signe == 1 && c > INT_MAX) || (signe == -1 && (-c) < INT_MIN))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	c;
	int			signe;

	i = 0;
	c = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		check_atoi(signe, c);
		i++;
	}
	return ((int)(signe * c));
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
