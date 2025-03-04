# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 11:17:48 by ncharbog          #+#    #+#              #
#    Updated: 2025/03/04 14:13:05 by ncharbog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = job

C++FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp \
	tests.cpp

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