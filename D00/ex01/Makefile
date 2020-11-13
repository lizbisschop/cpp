# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 13:40:53 by liz           #+#    #+#                  #
#    Updated: 2020/07/28 15:14:53 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = awesome_phonebook.cpp add_contacts.class.cpp

HPP = phonebook.class.hpp

FLAGS = -std=c++98 -Wall -Werror -Wextra

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