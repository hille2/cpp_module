# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgath <sgath@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:15:19 by sgath             #+#    #+#              #
#    Updated: 2021/05/21 13:04:55 by sgath            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		Zombie.cpp \
			ZombieEvent.cpp \
			main.cpp

INCLUDES =	ZombieEvent.hpp \
			Zombie.hpp

OBJ =		$(SRCS:.s=.o)

NAME =		ZombieEvent

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
