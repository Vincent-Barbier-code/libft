/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:53:57 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/04 19:37:46 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	point = malloc(nmemb * size);
	if (!point)
		return (NULL);
	point = ft_bzero(point, nmemb * size);
	return (point);
}
