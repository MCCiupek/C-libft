/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:44:47 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 21:41:47 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *pointer, int value, unsigned int count)
{
	unsigned char	*c;

	c = (unsigned char *)pointer;
	while (count--)
		*c++ = (unsigned char)value;
	return (pointer);
}
