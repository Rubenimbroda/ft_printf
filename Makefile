# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 10:51:45 by rnuno-im          #+#    #+#              #
#    Updated: 2025/10/16 10:30:18 by rnuno-im         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Werror -Wextra -Wall

SRCS	= ft_printf_char.c ft_printf_hex.c \
		  ft_printf_nbr.c ft_printf.c ft_printf_ptr.c 

OBJS	= $(SRCS:.c=.o)

AR		= ar rcs
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re