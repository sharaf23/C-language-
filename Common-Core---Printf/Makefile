# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/05 07:18:32 by sallawne          #+#    #+#              #
#    Updated: 2026/10/07 11:31:35 by sallawne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printf_hex.c helper.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
