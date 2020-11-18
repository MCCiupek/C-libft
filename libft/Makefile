# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mciupek </var/mail/mciupek>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 15:18:07 by mciupek           #+#    #+#              #
#    Updated: 2020/11/18 15:28:36 by mciupek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\

DIR		= ./
CC		= clang
FLAGS	= -Wall -Wextra -Werror
OBJ		= $(addprefix $(DIR), $(SRCS:.c=.o))

$(DIR)%.o:	$(DIR)%.c
	$(CC) $(FLAGS) -o $@ -c $<

s(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
