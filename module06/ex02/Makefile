# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yu <yu@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:15:19 by sgath             #+#    #+#              #
#    Updated: 2021/06/19 18:28:10 by yu               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		main.cpp
			
INCLUDES =	A.hpp \
			B.hpp \
			C.hpp \
			Base.hpp \

NAME =		 Identify

FLAGS =		-Wall -Wextra -Werror

.PHONY: 	all clean fclean re

all: 		$(NAME)

$(NAME):	$(INCLUDES) $(SRCS)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
