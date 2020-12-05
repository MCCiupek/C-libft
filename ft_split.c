/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:16:35 by mciupek           #+#    #+#             */
/*   Updated: 2020/12/05 13:41:31 by mciupek          ###   ########.fr       */
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

static char		**get_free(char **str, int l)
{
	while (str[++l])
		free(str[l]);
	free(str);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	*x;
	char	*y;
	char	**res;
	size_t	l;
	char	sep[2];

	sep[0] = c;
	sep[1] = 0;
	if (!s)
		return (NULL);
	l = count_wd(ft_strtrim(s, sep), c);
	if (!(res = (char **)malloc(sizeof(char *) * (l + 1))))
		return (NULL);
	res[l] = NULL;
	x = ft_strtrim(s, sep);
	while (l--)
	{
		y = ft_strtrim(ft_strrchr(x, c), sep);
		if (l)
			x = ft_strtrim(ft_substr(x, 0, ft_strlen(x) - ft_strlen(y)), sep);
		if (!(res[l] = (char *)malloc(sizeof(c) * (ft_strlen(l ? y : x) + 1))))
			return (get_free(res, l));
		res[l] = l ? y : x;
	}
	return (res);
}
