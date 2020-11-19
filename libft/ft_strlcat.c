/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:08:11 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 13:59:08 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	if (len > size)
		return (ft_strlen(src) + size);
	while (i < size - len)
	{
		if (src[i])
		{
			dest[len + i] = '\0';
			return (len + ft_strlen(src));
		}
		else
		{
			if (i == size - len - 1)
				dest[len + i] = '\0';
			else
				dest[len + i] = src[i];
		}
		i++;
	}
	return (len + ft_strlen(src));
}
