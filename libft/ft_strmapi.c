/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 00:50:22 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/26 22:24:10 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(new_str = (char *)(malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	ft_strcpy(new_str, s);
	while (new_str[i])
	{
		new_str[i] = f(i, new_str[i]);
		i++;
	}
	return (new_str);
}
