# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 15:37:26 by anruland          #+#    #+#              #
#    Updated: 2022/07/19 17:18:07 by anruland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= hi_this_is_brain
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
INPUT	= main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INPUT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
