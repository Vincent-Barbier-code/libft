/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:34:43 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/06 14:48:16 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*c;

	c = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!c)
		return (NULL);
	i = 0;
	while (str[i])
	{
		c[i] = f(i, str[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
