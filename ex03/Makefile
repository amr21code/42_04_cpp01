# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 15:37:26 by anruland          #+#    #+#              #
#    Updated: 2022/07/19 17:29:58 by anruland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= unnecessary_violence
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INPUT	= main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INPUT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
