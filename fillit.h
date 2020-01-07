#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"

typedef struct		s_tetris
{
    void            *tet_id;
	char			c;
	struct s_tetris	*next;
}					t_tetris;

#endif