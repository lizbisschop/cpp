# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/18 15:05:48 by liz           #+#    #+#                  #
#    Updated: 2020/11/13 14:31:46 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = weapon

SRCS = Weapon.cpp HumanA.cpp main.cpp HumanB.cpp

HPP = HumanA.hpp Weapon.hpp HumanB.cpp

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