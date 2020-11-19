/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:59:33 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/19 17:17:50 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (start < ft_strlen(s))
		if ((res = (char *)malloc(sizeof(*s) * (len + 1))))
		{
			ft_strlcpy(res, s + start, len);
			return (res);
		}
	return (NULL);
}
