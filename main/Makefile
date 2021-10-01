# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 09:06:00 by mokhames          #+#    #+#              #
#    Updated: 2021/09/27 13:02:17 by mokhames         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

FLAGS = -Wall -Wextra -Werror

SRC = srcs/push_swap.c srcs/utils.c \
srcs/print.c srcs/manu_stack2.c \
srcs/manu_stack.c srcs/libft_utils.c \
srcs/do_instructions.c srcs/ft_action.c \
srcs/do_instructions2.c \
srcs/bclear.c \
srcs/checker.c 

SRC_BONUS = srcs_bonus/checker_bonus.c \
srcs_bonus/checker2_bonus.c \
srcs_bonus/do_instructions_bonus.c \
srcs_bonus/do_instructions2_bonus.c \
srcs_bonus/manu_stack_bonus.c \
srcs_bonus/manu_stack2_bonus.c \
srcs_bonus/GNL/get_next_line_bonus.c \
srcs/libft_utils.c \
srcs_bonus/ft_libutil_bonus.c \
srcs_bonus/ft_strcpy_bonus.c \

CC = gcc
OBJECT = $(SRC:.c=.o)
OBJECT_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)


bonus: $(NAME_BONUS)
		

$(NAME):		
				@$(CC) $(FLAGS) $(SRC) -o $(NAME)
				@echo "\x1b[36m[PUSH_SWAP COMPILED]\x1b[0m"

$(NAME_BONUS):	
				@$(CC) $(FLAGS) $(SRC_BONUS) -o $(NAME_BONUS)
				@echo "\x1b[36m[CHECKER COMPILED]\x1b[0m"



clean:	
		@rm -f $(OBJECT) $(OBJECT_BONUS)
		@echo "\033[33mall $(NAME) and $(NAME_BONUS) .o files are removed\033[0m"

fclean: clean
		@rm -rf $(NAME) $(NAME_BONUS)
		@echo "\033[31m$(NAME) and $(NAME_BONUS) is deleted\033[0m"
	
re: 	fclean all
.PHONY: all, clean, fclean, re