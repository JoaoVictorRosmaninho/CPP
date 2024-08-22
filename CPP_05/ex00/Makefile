# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao <joao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 21:47:31 by jv                #+#    #+#              #
#    Updated: 2024/08/21 22:01:39 by joao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	   	:= c++
NAME   	:= Bureaucrat
CFLAGS 	:= -Wall -Wextra -Werror
IFLAGS  := -I./includes
STD    	:= -std=c++98
DIST	:= obj

SOURCES := $(wildcard src/*.cpp)
SOURCES += $(wildcard src/domain/*.cpp)
OBJECTS := $(addprefix $(DIST)/, $(SOURCES:.cpp=.o))
DIRS    := $(dir $(OBJECTS))


GREEN	:=	\e[92;5;118m
YELLOW	:=	\e[93;5;226m
GRAY	:=	\e[33;2;37m
RESET	:=	\e[0m
CURSIVE	:=	\e[33;3m

vpath %.hpp ./includes
vpath %.cpp $(DIRS)


.PHONY: all clean re


all: $(NAME)


debug:
	@echo $(DIRS)

$(NAME): $(DIST) $(OBJECTS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(STD) $(OBJECTS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

$(DIST)/%.o: %.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(STD) -c $< -o $@

$(DIST):
	@mkdir -p $(DIRS)
clean:
	@rm -rf $(OBJECTS)
	@printf "$1 (YELLOW)    - Objects removed.$(RESET)\n"

fclean: clean
	@rm -f   $(NAME)
	@rm -rf  $(DIST)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all