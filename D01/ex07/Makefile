# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lbisscho <lbisscho@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/06 11:54:58 by lbisscho      #+#    #+#                  #
#    Updated: 2020/12/06 11:59:58 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = Replace.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $@
%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all