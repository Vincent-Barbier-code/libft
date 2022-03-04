/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:34:24 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 16:43:16 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char const *s1, int start, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i != len)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

static char	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = ft_strlen(s1);
	while (set[j])
	{
		if (set[j] == s1[k - 1])
		{
			k--;
			j = 0;
		}
		else
			j++;
	}
	i = ft_start(s1, set);
	if (i > k)
		return (ft_strdup(""));
	return (ft_strcpy(s1, i, k - i));
}
