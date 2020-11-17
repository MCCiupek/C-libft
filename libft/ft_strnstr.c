/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:10:03 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 22:20:48 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s2[i] == '\0')
		return (&s1[i]);
	if (!size)
		return (0);
	while ((s2[i] || s1[i]) && i < size)
	{
		if (s1[i] == s2[i])
		{
			j = 0;
			while (s1[i + j] == s2[j])
			{
				if (!s2[j + 1])
					return (&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
