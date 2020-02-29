# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/08 15:26:23 by lhuang            #+#    #+#              #
#    Updated: 2020/02/10 19:13:58 by lhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone
SRCS= megaphone.cpp
FLAGS= -Wall -Wextra -Werror
RM= rm -f

all: $(NAME)

$(NAME): $(SRCS)
		clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
