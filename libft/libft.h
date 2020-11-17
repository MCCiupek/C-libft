/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:53:22 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/17 14:31:19 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_isalpha(char	str);
int		ft_isdigit(char	str);
int		ft_isalnum(char	str);
int		ft_isascii(char	str);
int		ft_isprint(char	str);
char		ft_toupper(char	str);
char		ft_tolower(char	str);
char		*ft_strchr(char *str, char c);
char		*ft_strrchr(char *str, char c);
int		ft_strncmp(char *s1, char *s2, unsigned int len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char		*ft_strnstr(char *s1, char *s2, unsigned int size);

#endif
