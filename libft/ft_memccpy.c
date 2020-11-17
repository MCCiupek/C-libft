/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:08:33 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 22:18:29 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int ch, unsigned int size)
{
	while (size-- && *((char *)src - 1) != (char)ch)
		ft_memset(dest++, *((char *)src++), 1);
	return (ft_strchr(dest, ch));
}
