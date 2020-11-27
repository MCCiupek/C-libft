/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:16:35 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/27 17:32:16 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_wd(char *str, char c)
{
	size_t	l;

	if (!str)
		return (0);
	l = ft_strlen(str) ? 1 : 0;
	if (!l)
		return (0);
	while (*((char *)str) && *((char *)++str))
		if (*((char *)str) == c && *((char *)str - 1) != c)
			l++;
	return (l);
}

static char		**get_free(char **str, char *x, char *y)
{
	size_t	i;

	i = -1;
	free(x);
	free(y);
	while (str[++i] != '\0')
		free(str[i]);
	free(str);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	*x;
	char	*y;
	char	**res;
	char	ch[2];
	size_t	l;

	ch[0] = c;
	ch[1] = '\0';
	if (!s)
		return (NULL);
	l = count_wd(ft_strtrim(s, ch), c);
	if (!(res = (char **)malloc(sizeof(char *) * (l + 1))))
		return (NULL);
	res[l] = NULL;
	x = ft_strtrim(s, ch);
	while (l--)
	{
		y = ft_strtrim(ft_strrchr(x, c), ch);
		if (l)
			x = ft_strtrim(ft_substr(x, 0, ft_strlen(x) - ft_strlen(y)), ch);
		if (!(res[l] = (char *)malloc(sizeof(c) * (ft_strlen(l ? y : x) + 1))))
			return (get_free(res, x, y));
		res[l] = l ? y : x;
	}
	return (res);
}
