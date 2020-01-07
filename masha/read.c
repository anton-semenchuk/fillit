/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbolt <dbolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 19:30:13 by dbolt             #+#    #+#             */
/*   Updated: 2019/12/20 19:49:12 by dbolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error()
{
	ft_putstr("error\n");
	exit(1);
}

int		checkpoint(char *line)
{
	while (*line)
	{
		if (*line != '#'||*line != '.')
			return (0);
		line++;
	}
	return(1);
}

int		rcount(char *line)
{
	int	r;

	r = 0;
	if(!line)
		return(0);
	while(*line)
	{
		line++;
		if (*line == '#')
			r++;
	}
	return (r);
}

