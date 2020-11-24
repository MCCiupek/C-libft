/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:11:16 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/24 11:23:01 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strfind(char const *s, char *set, int order)
{
	int	i;
	int	j;
	int	len;
	int	start;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	start = (order == 1 ? 0 : len - 1);
	while (i < len)
	{
		j = 0;
		while (set[j] && s[start + order * i] != set[j])
			if (set[++j] == '\0')
				return (i);
		i++;
	}
	return (i);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	size_t	size;
	int		stop;
	int		start;

	if (!s1 || !set)
		return (NULL);
	start = ft_strfind(s1, (char *)set, 1);
	if (start == ft_strlen(s1))
		stop = 0;
	else
		stop = ft_strfind(s1, (char *)set, -1);
	size = ft_strlen(s1) - start - stop;
	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	stop = ft_strlcpy(res, (char *)s1 + start, size + 1);
	return (res);
}
