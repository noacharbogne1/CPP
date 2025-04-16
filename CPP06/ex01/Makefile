# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 14:30:13 by ncharbog          #+#    #+#              #
#    Updated: 2025/04/16 13:49:23 by ncharbog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

NAME = ScalarConverter

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp \
	ScalarConverter.cpp

OBJ_DIR = .objects

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)
re:	fclean all

.PHONY: all clean fclean re