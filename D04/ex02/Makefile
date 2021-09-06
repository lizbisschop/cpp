# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 16:05:55 by lbisscho      #+#    #+#                  #
#    Updated: 2021/02/18 16:32:56 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Squad

SRCS = AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

HPP = AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp Squad.hpp TacticalMarine.hpp 

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