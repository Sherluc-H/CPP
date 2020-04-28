# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/28 19:40:52 by lhuang            #+#    #+#              #
#    Updated: 2020/04/28 19:40:54 by lhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Array
CC= clang++
CFLAGS= -Wall -Wextra -Werror
RM= rm -f
SRCS= main.cpp
HEADERS= Array.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
