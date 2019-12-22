/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:54:52 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/22 18:25:32 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i])
		i++;
	i += 1;
	if (len > i)
	{
		dst = ft_memmove((void*)dst, (void*)src, i);
		while (i < len)
			dst[i++] = '\0';
	}
	else
		dst = ft_memmove((void*)dst, (void*)src, len);
	return (dst);
}
