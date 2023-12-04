# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 20:01:53 by mben-sal          #+#    #+#              #
#    Updated: 2023/10/15 13:31:48 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = HumanA.hpp\
		 HumanB.hpp\
 		 Weapon.hpp\

SRC = Weapon.cpp\
	  main.cpp\
	  HumanA.cpp\
	  HumanB.cpp\

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