# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 16:05:55 by lbisscho      #+#    #+#                  #
#    Updated: 2021/01/06 12:20:23 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Squad

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

HPP = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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