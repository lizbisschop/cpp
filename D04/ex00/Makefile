# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 16:05:55 by lbisscho      #+#    #+#                  #
#    Updated: 2021/01/06 12:19:40 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Sorcerer

SRCS = Sorcerer.cpp Peon.cpp Victim.cpp main.cpp Stooge.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

HPP = Sorcerer.hpp Peon.hpp Victim.hpp Stooge.hpp

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