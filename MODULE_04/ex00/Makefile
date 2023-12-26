# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 13:00:01 by mben-sal          #+#    #+#              #
#    Updated: 2023/12/26 15:40:42 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Animal.hpp\
		Cat.hpp\
		Dog.hpp\
		WrongAnimal.hpp\
		WrongCat.hpp\

SRC = 	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\

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