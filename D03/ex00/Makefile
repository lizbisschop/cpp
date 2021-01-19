# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 16:05:55 by lbisscho      #+#    #+#                  #
#    Updated: 2021/01/05 15:41:16 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRCS = FragTrap.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

HPP = FragTrap.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HPP)
	clang++ $(FLAGS) $(OBJ) -o $@
%.o: %.cpp %.hpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all