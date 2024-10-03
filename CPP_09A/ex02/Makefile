NAME = PmergeMe
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = ./main.cpp \
		./PmergeMe.cpp

OBJS    = $(SRCS:%.cpp=%.o)

all:    $(NAME)

$(NAME):	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:		%.cpp
				$(CC) $(CFLAGS) -o $@ -c $<

run:	$(NAME)
			./$(NAME) 3 5 9 7 4

run3000:	$(NAME)
			./$(NAME) `shuf -i 1-100000 -n 3000 | tr "\n" " "`

clean:
				rm -f $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

valgrind:	all
			valgrind ./$(NAME) 3 5 9 7 4

.PHONY:		all clean fclean re valgrind