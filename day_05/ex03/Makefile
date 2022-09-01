# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 14:20:19 by cbridget          #+#    #+#              #
#    Updated: 2022/09/01 14:25:22 by cbridget         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp Intern.cpp

HDR = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
PresidentialPardonForm.hpp Intern.hpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HDR) Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean
	$(MAKE)
