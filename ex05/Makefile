# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 09:52:52 by anruland          #+#    #+#              #
#    Updated: 2022/07/21 13:52:01 by anruland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= sed_loser
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g3
INPUT	= main.cpp \

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INPUT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
