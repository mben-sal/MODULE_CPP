# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 20:42:06 by mben-sal          #+#    #+#              #
#    Updated: 2023/12/01 20:42:11 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PhoneBook

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = ./PhoneBook.hpp

SRC = ./PhoneBook.cpp\
		./Contact.cpp

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