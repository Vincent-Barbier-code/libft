/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:10:48 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/29 20:01:52 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*scpy;
	size_t			i;

	i = 0;
	scpy = (unsigned char *) s;
	while (i < n)
	{
		if (*scpy == (unsigned char)c)
			return (scpy);
		scpy++;
		i++;
	}
	return (NULL);
}
