/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:12:13 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 22:52:04 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1u;
	unsigned char	*s2u;

	if (n == 0)
		return (0);
	s1u = (unsigned char *) s1;
	s2u = (unsigned char *) s2;
	while (n - 1 && *s1u == *s2u)
	{
		s1u++;
		s2u++;
		n--;
	}
	return (*s1u - *s2u);
}
