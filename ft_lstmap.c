/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:33:27 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/06 16:02:32 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*ok;

	if (!lst)
		return (NULL);
	cpy = 0;
	while (lst)
	{
		ok = ft_lstnew(f(lst->content));
		if (!ok)
		{
			ft_lstclear(&cpy, del);
			return (NULL);
		}
		ft_lstadd_back(&cpy, ok);
		lst = lst ->next;
	}
	return (cpy);
}
