# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 20:08:55 by mben-sal          #+#    #+#              #
#    Updated: 2023/10/21 13:14:38 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = fixed.hpp\

SRC = 	main.cpp\
		fixed.cpp

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
