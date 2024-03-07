# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 13:21:07 by mben-sal          #+#    #+#              #
#    Updated: 2024/03/06 17:30:15 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serial

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = 	./main.cpp\

OBJ = ${SRC:%.cpp=%.o}

%.o : %.cpp
	@$(CPPC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CPPC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Compilation done"


clean :
	@rm -f $(OBJ)
	@echo "clean done"

fclean :clean
	@rm -f $(NAME)
	@echo "fclean done"

re : fclean all