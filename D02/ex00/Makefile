# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/29 11:21:01 by lbisscho      #+#    #+#                  #
#    Updated: 2020/11/29 11:26:33 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRCS = Fixed.cpp main.cpp

HPP = Fixed.hpp

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRCS)
	clang++ $(FLAGS) $(OBJ) -o $@
%.o: %.cpp %.hpp
	clang++ $(FLAGSS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
