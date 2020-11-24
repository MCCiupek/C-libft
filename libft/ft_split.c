/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:16:35 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/24 09:52:03 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ch(char c)
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
	while (*((char *)str++ + 1))
		if (*((char *)str) == c && *((char *)str - 1) != c)
			l++;
	return (l);
}

char	**ft_split(char const *s, char c)
{
	char	*t;
	char	*str;
	char	**res;
	size_t	l;

	if (!s || !c)
		return (NULL);
	l = count_wd(ft_strtrim(s, ch(c)), c);
	if (!(res = (char **)malloc(sizeof(char *) * (l + 1))))
		return (NULL);
	res[l] = NULL;
	if (!l)
		return (res);
	t = ft_strtrim(s, ch(c));
	while (--l)
	{
		str = ft_strtrim(ft_strrchr(t, c), ch(c));
		t = ft_strtrim(ft_substr(t, 0, ft_strlen(t) - ft_strlen(str)), ch(c));
		if (!(res[l] = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
			return (NULL);
		res[l] = str;
	}
	if (!(res[l] = (char *)malloc(sizeof(char) * (ft_strlen(t) + 1))))
		return (NULL);
	res[l] = t;
	return (res);
}
