# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/13 18:52:57 by lhuang            #+#    #+#              #
#    Updated: 2020/02/13 18:54:06 by lhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= replace
CC= clang++
FLAGS= -Wall -Wextra -Werror
RM= rm -f
SRCS= main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) *.replace

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
