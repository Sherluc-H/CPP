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
