# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 13:21:07 by mben-sal          #+#    #+#              #
#    Updated: 2024/03/04 13:38:20 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

# HEADER = Conversion.hpp

SRC = 	./main.cpp\
		./Conversion.cpp

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