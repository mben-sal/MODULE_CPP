# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 15:16:45 by mben-sal          #+#    #+#              #
#    Updated: 2023/12/09 16:42:27 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = sed.hpp\

SRC = 	main.cpp\
		sed.cpp\

OBJ = ${SRC:%.cpp=%.o}

%.o : %.cpp
	@$(CPPC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@$(CPPC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "compilation done"

clean :
	@rm -f $(OBJ) *.replace
	@echo "clean done"

fclean :clean
	@rm -f $(NAME)
	@echo "fclean done"

re : fclean all