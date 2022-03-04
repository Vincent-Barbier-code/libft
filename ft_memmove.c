/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:53:49 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 22:52:38 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dcpy;
	unsigned char		*scpy;
	size_t				i;

	dcpy = (unsigned char *) dest;
	scpy = (unsigned char *) src;
	if (dcpy < scpy)
	{
		i = 0;
		while (i < n)
		{
			dcpy[i] = scpy[i];
			i++;
		}
	}
	if (dcpy > scpy)
	{
		i = n;
		while (i-- > 0)
			dcpy[i] = scpy[i];
	}
	return (dest);
}
