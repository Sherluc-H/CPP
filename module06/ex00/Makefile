NAME= Scalar_Conversion
CC= clang++
CFLAGS= -Wall -Wextra -Werror
RM= rm -f
SRCS= main.cpp ScalarConversion.cpp
HEADERS= ScalarConversion.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
