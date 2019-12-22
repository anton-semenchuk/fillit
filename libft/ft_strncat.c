/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:25:45 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/26 22:23:23 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		len1;
	int		len2;
	size_t	i;

	len1 = 0;
	len2 = 0;
	i = 0;
	while (s1[len1])
		len1++;
	while (s2[len2] && i++ < n)
		s1[len1++] = s2[len2++];
	s1[len1] = '\0';
	return (s1);
}
