/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:54:41 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 01:45:19 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1u;
	char	*s2u;
	char	*sconc;
	int		i;

	i = 0;
	s1u = (char *) s1;
	s2u = (char *) s2;
	sconc = malloc((ft_strlen(s1u) + ft_strlen(s2u)) * sizeof(char) + 1);
	if (!sconc)
		return (NULL);
	while (*s1u)
	{
		sconc[i] = *s1u;
		i++;
		s1u++;
	}
	while (*s2u)
	{
		sconc[i] = *s2u;
		i++;
		s2u++;
	}
	sconc[i] = '\0';
	return (sconc);
}
