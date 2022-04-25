# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 16:40:16 by bade-lee          #+#    #+#              #
#    Updated: 2022/04/25 10:44:33 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#          ----------========== {     VARS     } ==========----------

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I push_swap.h
LIB = libft/libft.a

#          ----------========== {     SRCS     } ==========----------

SRC = \
		brute.c\
		checks.c\
		init.c\
		init_utils.c\
		moves.c\
		utils.c\
		push_swap.c\

#          ----------========== {     OBJS     } ==========----------

OBJ = $(SRC:.c=.o)

#          ----------========== {    REGLES    } ==========----------

all: $(NAME)

$(NAME):
	@make -C libft
	@$(CC) $(FLAGS) $(SRC) $(LIB) $(INCLUDE) -o $(NAME)
	@printf "\e[1;32m[Push_swap]\e[0;m"

clean:
	@make -C libft clean
	@rm -f $(OBJ)
	@printf "\e[0;31m[.o files deleted]\e[0;m"

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME)
	@printf "\e[0;31m[push_swap deleted]\e[0;m"

re: fclean all

.PHONY: all clean fclean re