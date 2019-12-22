/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:02:20 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/27 21:32:33 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_nb_words(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (!(*s == c))
		{
			while (!(*s == c) && *s)
				s++;
			count++;
		}
		while (*s == c)
			s++;
	}
	return (count);
}

static int	ft_wlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_strsplit_cleaning(char ***arr)
{
	size_t i;

	i = 0;
	while ((*arr)[i])
	{
		free((*arr)[i]);
		(*arr)[i] = NULL;
		i++;
	}
	free(*arr);
	*arr = NULL;
	arr = NULL;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (NULL);
	count = ft_nb_words(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * count + 1)))
		return (NULL);
	while (count > 0)
	{
		while (*s == c && *s)
			s++;
		res[i] = ft_strsub(s, 0, ft_wlen(s, c));
		if (res[i] == NULL && ft_strsplit_cleaning(&res))
			return (NULL);
		s += ft_wlen(s, c);
		i++;
		count--;
	}
	res[i] = NULL;
	return (res);
}
