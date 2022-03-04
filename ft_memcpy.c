/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:36:17 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/04 19:46:43 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dcpy;
	const unsigned char	*scpy;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dcpy = dest;
	scpy = src;
	while (i < n)
	{
		dcpy[i] = scpy[i];
		i++;
	}
	return (dest);
}
