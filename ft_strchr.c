/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:59:04 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 22:53:59 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	char	*strcp;

	strcp = (char *) str;
	while (*strcp)
	{
		if (*strcp == (char) i)
			return (strcp);
		strcp++;
	}
	if (i == 0)
		return ((char *) strcp);
	return (NULL);
}
