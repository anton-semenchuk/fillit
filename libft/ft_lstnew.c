/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:55 by ilongtow          #+#    #+#             */
/*   Updated: 2019/10/11 18:38:04 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*el;

	if (!(el = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		el->content = NULL;
		el->content_size = 0;
	}
	else
	{
		if (!(el->content = (void *)malloc(content_size)))
		{
			free(el);
			el = NULL;
			return (NULL);
		}
		ft_memcpy(el->content, content, content_size);
		el->content_size = content_size;
	}
	el->next = NULL;
	return (el);
}
