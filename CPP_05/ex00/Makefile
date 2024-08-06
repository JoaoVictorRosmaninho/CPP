# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao <joao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 21:47:31 by jv                #+#    #+#              #
#    Updated: 2024/08/05 23:52:30 by joao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	   	:= c++
NAME   	:= Bureaucrat
CFLAGS 	:= -Wall -Wextra -Werror -g
IFLAGS  := -I./includes
STD    	:= -std=c++98
SOURCES := $(shell find . -type f -name '*.cpp')
DIST	:= obj
OBJECTS := $(addprefix $(DIST)/, $(notdir $(SOURCES:.cpp=.o)))
DIRS    := $(dir $(SOURCES))


GREEN	:=	\e[92;5;118m
YELLOW	:=	\e[93;5;226m
GRAY	:=	\e[33;2;37m
RESET	:=	\e[0m
CURSIVE	:=	\e[33;3m

vpath %.hpp ./includes
vpath %.cpp $(DIRS)


.PHONY: all clean re


all: $(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

debug:
	@echo $(OBJECTS)

$(NAME): $(OBJECTS) 
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(STD) $(OBJECTS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"


$(DIST):
	@mkdir -p $@

$(DIST)/%.o: %.cpp $(DIST)
	$(CC) $(CFLAGS) $(IFLAGS) $(STD) -c $< -o $@

clean:
	@rm -rf $(DIST)
	@printf "$1 (YELLOW)    - Objects removed.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all