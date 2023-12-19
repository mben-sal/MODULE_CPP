# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 14:22:09 by mben-sal          #+#    #+#              #
#    Updated: 2023/12/17 11:50:39 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = Fixed.hpp\

SRC = 	main.cpp\
		Fixed.cpp

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
