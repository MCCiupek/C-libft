/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:11:16 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/19 12:48:06 by mcciupek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	char	*tmp;
	char	*res;

	l = ft_strlen(set);
	tmp = (char *)s1;
	while (l && l < ft_strlen(tmp) && ft_strnstr(tmp, set, l))
		tmp = tmp + l;
	while (l && ft_strnstr(tmp + ft_strlen(tmp) - l, set, l))
		tmp = ft_substr(tmp, 0, ft_strlen(tmp) - l + 1);
	if (!(res = (char *)malloc(sizeof(char) * ft_strlen(tmp))))
		return (NULL);
	res = tmp;
	return (res);
}
