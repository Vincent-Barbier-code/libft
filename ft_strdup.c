/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:35:06 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/02 23:50:43 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strcp;
	int		i;

	i = 0;
	strcp = (char *) malloc(ft_strlen(str) + sizeof(char));
	if (!strcp)
		return (NULL);
	while (str[i])
	{
		strcp[i] = str[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}
