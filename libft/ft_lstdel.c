/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:50:22 by ilongtow          #+#    #+#             */
/*   Updated: 2019/10/11 19:08:13 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	acnt;
	t_list	anext;

	if (alst && del)
	{
		acnt = *alst;
		while (acnt)
		{
			anext = acnt->next;
			del(acnt->content, acnt->content_size);
			free(acnt);
			acnt = anext;
		}
		*alst = NULL;
	}
}
