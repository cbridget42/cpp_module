# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbridget <cbridget@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 14:57:24 by cbridget          #+#    #+#              #
#    Updated: 2022/08/04 17:19:53 by cbridget         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp

HDR =

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

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
