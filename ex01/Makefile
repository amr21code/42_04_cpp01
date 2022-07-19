# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 15:37:26 by anruland          #+#    #+#              #
#    Updated: 2022/07/19 15:38:14 by anruland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Moar_brainz
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INPUT	= main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INPUT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
