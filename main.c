#include <stdio.h>
#include "libft/libft.h"

/*void    algo(t_list square)
{
    char    *tet;
    int     i;

    i = 0;

    while (square->next != NULL)
    {
        
    }
    
}s
*/
char	**create_map(int size)
{
    int					i;
    char                **map;

    if(!size)
        return (NULL);
    i = 0;
    if (!(map = (char **)ft_memalloc(sizeof(char *) * (size + 1))))
		return (NULL);
    while (i < size)
    {
		map[i] = (char *)ft_memalloc(sizeof(char) * (size + 1));
		if (!(map[i] = (char *)ft_memalloc(sizeof(char) * (size + 1))))
		    {
                while (i-- >= 0)
                    ft_strdel(&map[i]);
                free(map);
                return (NULL);
			}
        i++;
	}
    return (map);
}

int    print(char **map, int size)
{
    int	i;
    
	i = 0;
  	if (!map)
    	return (-1);
    while (i < size)
    {
        ft_memset(*(map + i), '.', 5);
        printf("%s\n", *(map + i));
		i = i + 1;
    }
    return (0);
}

int     main(void)
{
    //t_list  square;
    char    **map;

    //if (argc != 2 || argv == NULL)
     //   return (-1);
    map = create_map(5);
    print(map, 5);
    return (0);
}