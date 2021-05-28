# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgath <sgath@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 11:15:19 by sgath             #+#    #+#              #
#    Updated: 2021/05/28 14:30:44 by sgath            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		main.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			ClapTrap.cpp \
			NinjaTrap.cpp \
			SuperTrap.cpp \

INCLUDES =	FragTrap.hpp \
			ScavTrap.hpp \
			ClapTrap.hpp \
			NinjaTrap.hpp \
			SuperTrap.hpp \

NAME =		SuperTrap

FLAGS =		-Wall -Wextra -Werror

.PHONY: 	all clean fclean re

all: 		$(NAME)

$(NAME):	 $(INCLUDES) $(SRCS)
			clang++ $(SRCS) $(FLAGS) -o $@

fclean:		
			rm -rf $(NAME)

re:			fclean all
