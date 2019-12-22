/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:14:37 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/22 17:51:58 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t len;

	len = 0;
	while (src[len])
		len++;
	len += 1;
	dst = ft_memmove((void*)dst, (void*)src, len);
	return (dst);
}
