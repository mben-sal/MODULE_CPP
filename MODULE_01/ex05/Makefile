# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 18:43:41 by mben-sal          #+#    #+#              #
#    Updated: 2023/10/17 09:47:13 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = Harl.hpp\

SRC = 	main.cpp\
		Harl.cpp

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