/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbier <vbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 03:27:09 by vbarbier          #+#    #+#             */
/*   Updated: 2021/12/04 19:44:20 by vbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *pre, const char *sec, size_t len)
{
	int	i;

	i = 0;
	while (pre[i] == sec[i] && (size_t)i < len - 1 && pre[i] && sec[i])
		i++;
	if (pre[i] < sec[i] && len > 0)
		return ((unsigned char)pre[i] - (unsigned char)sec[i]);
	if (pre[i] > sec[i] && len > 0)
		return ((unsigned char)pre[i] - (unsigned char)sec[i]);
	return (0);
}
