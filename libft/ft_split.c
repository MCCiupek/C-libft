/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:16:35 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/19 17:19:58 by mcciupek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	*tmp;
	char	*str;
	char	ch[2];
	char	**res;
	size_t	l;

	ch[0] = c;
	ch[1] = '\0';
	tmp = ft_strtrim(s, ch);
	l = 1;
	while (*((char *)tmp++ + 1))
		if (*((char *)tmp) == c && *((char *)tmp - 1) != c)
			l++;
	if (!(res = (char **)malloc(sizeof(char *) * (l + 1))))
		return (NULL);
	res[l] = NULL;
	tmp = ft_strtrim(s, ch);
	while (l--)
	{
		str = ft_strtrim(ft_strrchr(tmp, c), ch);
		tmp = ft_strtrim(ft_substr(tmp, 0, ft_strlen(tmp) - ft_strlen(str)), ch);
		printf("%zu : %s %s\n", l, str, tmp);
		if (!(res[l] = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
			return (NULL);
		res[l] = str;
	}
	return (res);
}
