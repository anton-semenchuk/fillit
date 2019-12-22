/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 19:41:46 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/26 22:18:02 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		ft_isnegative(int *n, int *minus)
{
	if (*n < 0)
	{
		*n *= -1;
		*minus = 1;
	}
}

char			*ft_itoa(int n)
{
	int		cpy_n;
	int		len;
	int		minus;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cpy_n = n;
	len = 2;
	minus = 0;
	ft_isnegative(&n, &minus);
	while (cpy_n /= 10)
		len++;
	len += minus;
	if (!(res = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	res[--len] = '\0';
	while (len--)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
	}
	if (minus)
		res[0] = '-';
	return (res);
}
