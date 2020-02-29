# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 13:16:07 by lhuang            #+#    #+#              #
#    Updated: 2020/02/09 20:05:20 by lhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= my_awesome_phonebook
FLAGS= -Wextra -Werror -Wall
SRCS= my_awesome_phonebook.cpp contact.cpp
HEADER= contact.hpp
RM= rm -f

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
		clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
