/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:53:22 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/19 12:14:57 by mcciupek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strnstr(const char *s1, const char *s2, size_t size);
void		*ft_memset(void *pointer, int value, size_t size);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t size);
void		*ft_memccpy(void *dest, const void *src, int ch, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t size);
void		*ft_memchr(const void *mem, int ch, size_t size);
int		ft_memcmp(const void *p1, const void *p2, size_t size);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char        **ft_split(char const *s, char c);

#endif
