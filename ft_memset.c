/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 04:18:33 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/29 19:24:54 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *point, int val, size_t len)
{
	unsigned char	*s;
	int				i;

	i = 0;
	s = point;
	while (len)
	{
		s[i] = (char) val;
		i++;
		len--;
	}
	return (point);
}
