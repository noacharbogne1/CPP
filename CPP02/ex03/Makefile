# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noa <noa@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 13:08:20 by ncharbog          #+#    #+#              #
#    Updated: 2025/03/10 17:32:42 by noa              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = a.out

C++FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp \
	Point.cpp \
	Fixed.cpp

OBJ_DIR = .objects

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(C++FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -f $(NAME)
re:	fclean all

.PHONY: all clean fclean re