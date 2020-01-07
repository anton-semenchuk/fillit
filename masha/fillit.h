/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbolt <dbolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 17:35:07 by dbolt             #+#    #+#             */
/*   Updated: 2019/12/20 19:01:03 by dbolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct		s_tetro
{
	struct s_tetro	*next;
	char			data;
	void			*tetroid;
}					t_tetro;

#endif
