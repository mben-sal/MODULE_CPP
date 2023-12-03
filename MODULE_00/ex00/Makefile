# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 14:06:01 by mben-sal          #+#    #+#              #
#    Updated: 2023/12/02 12:50:16 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = megaphone.cpp

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

fclean : clean
	@rm -f $(NAME)
	@echo "fclean done"

re : fclean all