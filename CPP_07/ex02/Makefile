# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao <joao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 21:47:31 by jv                #+#    #+#              #
#    Updated: 2024/09/11 22:26:02 by joao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	   	     := c++
NAME   	     := Array
CFLAGS 	     := -Wall -Wextra -Werror -ggdb
STD    	     := -std=c++98
DIST	     := obj


HEADERS      := $(wildcard *.hpp)

HEADER_DIRS  := $(dir $(HEADERS))
IFLAGS       := $(addprefix -I, $(HEADER_DIRS) ) 

SOURCES      := $(wildcard *.cpp)

OBJECTS      := $(addprefix $(DIST)/, $(SOURCES:.cpp=.o))
DIRS         := $(dir $(OBJECTS))

GREEN	     :=	\e[92;5;118m
YELLOW	     :=	\e[93;5;226m
GRAY	     :=	\e[33;2;37m
RESET	     :=	\e[0m
CURSIVE	     :=	\e[33;3m

vpath %.hpp $(HEADER_DIRS)
vpath %.cpp $(DIRS)

.PHONY: all clean re


all: $(NAME)


debug:
	@echo $(HEADER_DIRS)

$(NAME): $(DIST) $(OBJECTS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(STD) $(IFLAGS) $(OBJECTS) -o $(NAME)
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