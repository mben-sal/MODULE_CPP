# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 16:26:04 by mben-sal          #+#    #+#              #
#    Updated: 2023/12/09 12:40:27 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = ./Zombie.hpp

SRC = 	Zombie.cpp\
		main.cpp\
		zombieHorde.cpp\

OBJ = ${SRC:%.cpp=%.o}

%.o : %.cpp
	@$(CPPC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@$(CPPC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "compilation done"

clean :
	@rm -f $(OBJ)
	@echo "clean done"

fclean :clean
	@rm -f $(NAME)
	@echo "fclean done"

re : fclean all