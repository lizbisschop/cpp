# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/10 12:17:03 by liz           #+#    #+#                  #
#    Updated: 2020/10/14 15:52:10 by liz           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS = main.cpp Human.cpp Brain.cpp

HPP = Brain.hpp Human.hpp 

OBJ = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra

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
	