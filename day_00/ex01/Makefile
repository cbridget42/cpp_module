# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 17:28:52 by cbridget          #+#    #+#              #
#    Updated: 2022/07/25 20:15:25 by cbridget         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Contact.class.cpp PhoneBook.class.cpp main.cpp

HDR = Contact.class.hpp PhoneBook.class.hpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -g3 #-std=c++98

CC = g++

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
