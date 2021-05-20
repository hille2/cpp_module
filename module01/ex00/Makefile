# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgath <sgath@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:15:19 by sgath             #+#    #+#              #
#    Updated: 2021/05/20 13:44:10 by sgath            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		Pony.cpp \
			main.cpp
			

INCLUDES =	Pony.hpp

OBJ =		$(SRCS:.s=.o)

NAME =		Pony

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
