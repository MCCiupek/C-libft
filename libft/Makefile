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
SRCS	= *.c
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
