# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 14:30:13 by ncharbog          #+#    #+#              #
#    Updated: 2025/03/18 12:36:19 by ncharbog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = scavTrap

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp

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