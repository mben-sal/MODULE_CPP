# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 10:29:35 by mben-sal          #+#    #+#              #
#    Updated: 2024/02/26 18:15:36 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CPPC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER = ./Bureaucrat.hpp\
		 ./Form.hpp\
		 ./ShrubberyCreationForm.hpp\
		 ./PresidentialPardonForm.hpp\
		 ./RobotomyRequestForm.hpp

SRC = ./Bureaucrat.cpp\
	  ./Form.cpp\
	  ./main.cpp\
	  ./ShrubberyCreationForm.cpp\
	  ./PresidentialPardonForm.cpp\
	  ./RobotomyRequestForm.cpp

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