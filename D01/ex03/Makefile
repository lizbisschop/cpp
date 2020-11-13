# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/10 11:53:50 by liz           #+#    #+#                  #
#    Updated: 2020/11/12 12:43:09 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

HPP = Zombie.hpp ZombieHorde.hpp

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

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