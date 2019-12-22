/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:33:52 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/28 18:46:01 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void		ft_atoi_skip(const char **str, int *sign)
{
	while (**str == ' ' || **str == '\n' || **str == '\t' ||
			**str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	if (**str == '-')
		*sign = -1;
	if (**str == '-' || **str == '+')
		(*str)++;
	while (**str == '0')
		(*str)++;
}

int				ft_atoi(const char *str)
{
	long int	res;
	int			sign;

	res = 0;
	sign = 1;
	ft_atoi_skip(&str, &sign);
	while (*str && *str >= '0' && *str <= '9')
	{
		if ((res * 10 + *str - '0') < res)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		res = res * 10 + (*str - '0');
		++str;
	}
	return ((int)res * sign);
}

int main()
{
	char i[25] = "00000000000000000000123";
	printf("%i\n", ft_atoi(i));
	return (0);
}

