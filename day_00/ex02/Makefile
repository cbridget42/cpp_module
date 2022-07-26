# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 19:51:17 by cbridget          #+#    #+#              #
#    Updated: 2022/07/26 22:01:27 by cbridget         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC = tests.cpp Account.cpp

HDR = Account.hpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror #-std=c++98

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
