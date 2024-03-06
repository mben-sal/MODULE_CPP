# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 10:58:42 by mben-sal          #+#    #+#              #
#    Updated: 2024/03/06 10:58:58 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = ./Array.hpp\

SRC = ./main.cpp\

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