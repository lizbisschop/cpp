# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/07 15:04:44 by liz           #+#    #+#                  #
#    Updated: 2021/01/25 13:02:06 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

HPP = whatever.hpp

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