# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/07 15:04:44 by liz           #+#    #+#                  #
#    Updated: 2021/01/17 15:17:51 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRCS = Bureaucrat.cpp Form.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

HPP = Bureaucrat.hpp Form.hpp

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