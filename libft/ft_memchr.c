/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:02:22 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/18 14:43:18 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void	*mem, int ch, unsigned int size)
{
	while (size--)
	{
		if (*((char *)mem) == (char)ch)
			return (mem);
		mem++;
	}
	return (0);
}
