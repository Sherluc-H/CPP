# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/28 17:23:09 by lhuang            #+#    #+#              #
#    Updated: 2020/04/28 17:23:11 by lhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Identify_Real_Type
CC= clang++
CFLAGS= -Wall -Wextra -Werror
RM= rm -f
SRCS= main.cpp Base.cpp
HEADERS= Base.hpp A.hpp B.hpp C.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
