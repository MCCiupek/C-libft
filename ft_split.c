/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:16:35 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/25 16:08:41 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ch(char c)
{
	char	*res;

	if (!(res = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	res[0] = c;
	res[1] = '\0';
	return (res);
}

static size_t	count_wd(char *str, char c)
{
	size_t	l;

	l = ft_strlen(str) ? 1 : 0;
	if (!l)
		return (0);
	while (*((char *)str++ + 1))
		if (*((char *)str) == c && *((char *)str - 1) != c)
			l++;
	return (l);
}

char			**ft_split(char const *s, char c)
{
	char	*x;
	char	*y;
	char	**res;
	size_t	l;

	if (!s)
		return (NULL);
	l = count_wd(ft_strtrim(s, ch(c)), c);
	if (!(res = (char **)malloc(sizeof(char *) * (l + 1))))
		return (NULL);
	res[l] = NULL;
	x = ft_strtrim(s, ch(c));
	while (l--)
	{
		y = ft_strtrim(ft_strrchr(x, c), ch(c));
		if (l)
			x = ft_strtrim(ft_substr(x, 0, ft_strlen(x) - ft_strlen(y)), ch(c));
		if (!(res[l] = malloc(sizeof(char) * (ft_strlen(l ? y : x) + 1))))
			return (NULL);
		res[l] = l ? y : x;
	}
	return (res);
}
