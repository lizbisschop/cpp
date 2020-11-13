# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: liz <liz@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 11:14:32 by liz           #+#    #+#                  #
#    Updated: 2020/07/28 15:16:44 by lbisscho      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJ = $(SRCS:.cpp=.o)

WWW = -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(WWW) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all