/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:28:00 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/02 23:59:07 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s2;
	char		*scpy;
	size_t		i;
	size_t		j;

	scpy = (char *)s;
	i = 0;
	j = 0;
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		s2 = malloc(sizeof(char));
	else
		s2 = malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		if (j < len && i >= start)
			s2[j++] = scpy[i];
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
