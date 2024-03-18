# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 16:54:26 by mben-sal          #+#    #+#              #
#    Updated: 2024/03/18 16:58:12 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = RPN.hpp\

SRC = ./RPN.cpp\
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