/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:30:22 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/06 09:13:06 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*listenew;

	listenew = (t_list *)malloc(sizeof(t_list));
	if (!listenew)
		return (NULL);
	listenew ->content = content;
	listenew ->next = NULL;
	return (listenew);
}
