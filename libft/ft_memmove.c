/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:51:38 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/24 10:29:45 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	tmp[size];

	if (!dest && !src)
		return (NULL);
	ft_memcpy((void *)&tmp, src, size);
	ft_memcpy(dest, (void *)&tmp, size);
	return (dest);
}
