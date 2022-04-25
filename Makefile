# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 16:40:16 by bade-lee          #+#    #+#              #
#    Updated: 2022/04/25 14:21:28 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#          ----------========== {     VARS     } ==========----------

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror -fsanitize=address
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

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
OBJ_DIR = obj_dir/

#          ----------========== {    REGLES    } ==========----------

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@make -C libft
	@$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
	@printf "\e[1;32m[Push_swap]\e[0;m"

$(OBJ_DIR)%.o: %.c
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	@printf "\e[1;32m.\e[0;m"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@make -C libft clean
	@rm -f $(OBJ)
	@rm -rf obj_dir
	@printf "\e[0;31m[.o files deleted]\e[0;m"

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME)
	@printf "\e[0;31m[push_swap deleted]\e[0;m"

re: fclean all

.PHONY: all clean fclean re