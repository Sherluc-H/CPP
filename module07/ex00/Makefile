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
