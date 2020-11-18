/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:44:22 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/18 14:51:41 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *p1, void *p2, unsigned int size)
{
	while ((p1 || p2) && size--)
	{
		if (*((char *)p1) > *((char *)p2))
			return (*((char *)p1) - *((char *)p2));
		if (*((char *)p1) < *((char *)p2))
			return (*((char *)p1) - *((char *)p2));
		p1++;
		p2++;
	}
	return (0);
}
