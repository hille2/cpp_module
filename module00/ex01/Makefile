# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgath <sgath@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 14:20:59 by sgath             #+#    #+#              #
#    Updated: 2021/05/02 13:04:50 by sgath            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		phonebook.cpp \
			contact.cpp \
			main.cpp
			

INCLUDES =	phonebook.hpp \
			contact.hpp

OBJ =		$(SRCS:.s=.o)

NAME =		PhoneBook

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
