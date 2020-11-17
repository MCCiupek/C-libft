/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:47:31 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 11:52:31 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (!src[i])
		{
			dest[i] = '\0';
			break ;
		}
		else
		{
			if (i == size - 1)
			{
				dest[i] = '\0';
				break ;
			}
			else
				dest[i] = src[i];
		}
		i++;
	}
	while (src[i])
		i++;
	return (i);
}
