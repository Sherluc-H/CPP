# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/28 19:24:12 by lhuang            #+#    #+#              #
#    Updated: 2020/04/28 19:24:14 by lhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Whatever
CC= clang++
CFLAGS= -Wall -Wextra -Werror
RM= rm -f
SRCS= whatever.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
