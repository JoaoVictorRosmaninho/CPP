# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao <joao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 21:47:31 by jv                #+#    #+#              #
#    Updated: 2024/06/29 18:01:42 by joao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	   	:= c++
NAME   	:= bsp
CFLAGS 	:= -I.
STD    	:= -std=c++98
SOURCE 	:= $(shell find . -type f -name '*.cpp')
OBJECTS := $(SOURCE:.cpp=.o)

GREEN	:=	\e[92;5;118m
YELLOW	:=	\e[93;5;226m
GRAY	:=	\e[33;2;37m
RESET	:=	\e[0m
CURSIVE	:=	\e[33;3m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(STD) $(OBJECTS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)
	@printf "$(YELLOW)    - Objects removed.$(RESET)\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all
