# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/10 11:40:05 by liz           #+#    #+#                  #
#    Updated: 2020/12/05 13:54:16 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp Zombie.cpp ZombieEvent.cpp

HPP = Zombie.hpp ZombieEvent.hpp

FLAGS = -std=c++98 -Wall -Werror -Wextra

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