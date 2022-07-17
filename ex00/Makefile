# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 17:38:02 by anruland          #+#    #+#              #
#    Updated: 2022/07/17 18:16:07 by anruland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brainz
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INPUT	= main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INPUT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
