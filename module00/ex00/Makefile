# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgath <sgath@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 13:18:17 by sgath             #+#    #+#              #
#    Updated: 2021/04/27 14:20:34 by sgath            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		megaphone.cpp

OBJ =		$(SRCS:.s=.o)

NAME =		megaphone

FLAGS =		-Wall -Wextra -Werror

.PHONY: 	all clean fclean re

all: 		$(NAME)

$(NAME):	$(OBJ)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
