/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:41:59 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 21:51:57 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, unsigned int size)
{
	while (size--)
	   	ft_memset(dest++, *((char*)src++), sizeof(char)*1);
	return (dest);
}
