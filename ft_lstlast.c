/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:17:04 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/06 14:59:58 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void print_list (t_list *list)
{
	while (list)
	{
		ft_putstr_fd(list->content,1);
		if (list->next == NULL)
		{
			return(EXIT_SUCCESS);
		}
		list = list ->next;
	}
}
*/

t_list	*ft_lstlast(t_list *lst)
{	
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

/*
int main()
{
	t_list *list;
	t_list *list2;

	list = ft_lstnew(1);
	list2 = ft_lstnew("SAlut");
	ft_lstadd_front(&list,list2);
	printf("%d",ft_lstsize(list));
	//print_list(list);
}*/