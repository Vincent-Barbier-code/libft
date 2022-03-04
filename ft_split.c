/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:49:42 by vbarbier          #+#    #+#             */
/*   Updated: 2021/11/30 22:53:02 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cword(char const *s, char c)
{
	int	cmp;
	int	i;
	int	flag;

	i = 0;
	cmp = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] == c && flag == 0)
			flag = 1;
		if (s[i] != c && flag == 1)
		{
			flag = 0;
			cmp++;
		}
		i++;
	}
	return (cmp);
}

static int	ft_longmots(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_insertword(char const *s, char **tab, char c)
{
	int		i;
	int		a;
	int		nbmot;
	int		len;

	i = 0;
	nbmot = 0;
	while (s[i])
	{
		len = ft_longmots(s, c, i);
		if (s[i] != c)
		{
			a = 0;
			tab[nbmot] = malloc((len + 1) * sizeof(char));
			if (!tab[nbmot])
				return (NULL);
			while (s[i] != c && s[i])
				tab[nbmot][a++] = s[i++];
			tab[nbmot++][a] = '\0';
		}
		if (s[i])
			i++;
	}
	tab[nbmot] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = malloc((ft_cword(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab = ft_insertword(s, tab, c);
	return (tab);
}
