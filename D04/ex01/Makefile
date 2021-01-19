# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 16:05:55 by lbisscho      #+#    #+#                  #
#    Updated: 2021/01/06 14:14:40 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Character

SRCS = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp main.cpp SuperMutant.cpp Nokia.cpp Rakk.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

HPP = AWeapon.hpp Character.hpp Enemy.hpp PlasmaRifle.hpp PowerFist.hpp RadScorpion.hpp SuperMutant.hpp Nokia.hpp Rakk.hpp

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