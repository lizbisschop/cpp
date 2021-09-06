# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/07 15:04:44 by liz           #+#    #+#                  #
#    Updated: 2021/01/25 14:44:44 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

HPP = iter.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

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