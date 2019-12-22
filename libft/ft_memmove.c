/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 03:11:54 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/22 18:25:56 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	i = 0;
	if (!dst_ptr && !src_ptr)
		return (NULL);
	if (src_ptr < dst_ptr)
		while (len-- > 0)
			dst_ptr[len] = src_ptr[len];
	else
		while (len-- > 0)
			*(dst_ptr++) = *(src_ptr++);
	return (dst);
}
