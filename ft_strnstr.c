/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:34:19 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/06 07:17:22 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t		i;
	size_t		copi;
	size_t		j;
	char		*strcpy;

	i = 0;
	j = 0;
	strcpy = (char *) str;
	if (!*tofind)
		return ((char *)str);
	while (strcpy[i] && i < len)
	{
		copi = i;
		while (strcpy[i] == tofind[j] && i < len)
		{
			i++;
			j++;
			if (j == ft_strlen(tofind))
				return (&strcpy[copi]);
		}
		j = 0;
		i = copi + 1;
	}
	return (NULL);
}
