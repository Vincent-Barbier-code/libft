/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:15:56 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 22:55:43 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int i)
{
	int		last;
	char	*strcp;

	strcp = (char *) str;
	last = ft_strlen(strcp);
	while (last >= 0)
	{	
		if (strcp[last] == (char) i)
		{
			return (&strcp[last]);
		}
		last--;
	}
	return (NULL);
}
