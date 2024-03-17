# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 12:31:44 by mben-sal          #+#    #+#              #
#    Updated: 2024/03/17 12:32:31 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = PmergeMe.hpp\

SRC = ./PmergeMe.cpp\
		./main.cpp\

OBJ = ${SRC:%.cpp=%.o}

%.o : %.cpp $(HEADER)
	@$(CPPC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@$(CPPC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "compilation done"

clean :
	@rm -f $(OBJ)
	@echo "clean done"

fclean : clean
	@rm -f $(NAME)
	@echo "fclean done"

re : fclean all