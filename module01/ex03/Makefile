# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgath <sgath@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:15:19 by sgath             #+#    #+#              #
#    Updated: 2021/05/21 13:03:08 by sgath            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		Zombie.cpp \
			ZombieHorde.cpp \
			main.cpp

INCLUDES =	ZombieHorde.hpp \
			Zombie.hpp

OBJ =		$(SRCS:.s=.o)

NAME =		ZombieHorde

FLAGS =		-Wall -Wextra -Werror

.PHONY: 	all clean fclean re

all: 		$(NAME)

$(NAME):	$(OBJ) $(INCLUDES)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
