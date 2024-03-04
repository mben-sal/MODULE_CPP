# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/07/03 13:23:36 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serial

SRC =	main.cpp\

OBJ = $(SRC:.cpp=.o)

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

bold = $(shell tput bold)

magenta = `tput setaf 5`

ED = \033[0m

all : $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(bold)$(magenta)Combilation Done.$(ED)"

clean: 
		@rm -f $(OBJ)
		@echo "clean Done."

fclean: clean
		@rm -f $(NAME)
		@echo "fclean Done."

re: fclean all