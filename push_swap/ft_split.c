/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbayousf <cbayousf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:23:55 by cbayousf          #+#    #+#             */
/*   Updated: 2025/02/25 11:09:05 by cbayousf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s1, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)ft_malloc((n + 1) * sizeof(char));
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}

static char	**ajout(char const *s, char c, char **tab)
{
	int	i;
	int	d;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		d = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[k] = ft_strndup(s + d, i - d);
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = (char **)ft_malloc((ft_count(s, c) + 1) * sizeof(char *));
	return (ajout(s, c, tab));
}
