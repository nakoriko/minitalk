# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:21:31 by nakoriko          #+#    #+#              #
#    Updated: 2024/07/31 16:30:05 by nakoriko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_S = server.c 

SRCS_C = client.c
	
OBJ_S = $(SRCS_S:.c=.o)

OBJ_C = $(SRCS_C:.c=.o)

CC = cc

CFLAG = -Wall -Werror -Wextra

HEADER = minitalk.h

NAME = server

CLIENT = client

all: libft $(NAME) $(CLIENT)

libft: 
	$(MAKE) -C libft/

$(NAME): $(OBJ_S)
	$(CC) -g $(OBJ_S) libft/libft.a libft/ft_printf/libftprintf.a -o $(NAME)

$(CLIENT): $(OBJ_C)
	$(CC) -g $(OBJ_C) libft/libft.a libft/ft_printf/libftprintf.a -o $(CLIENT)

%.o:%.c $(HEADER)
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ_S) $(OBJ_C)
	$(MAKE) clean -C libft/
	
fclean: clean
	rm -f server client
	$(MAKE) fclean -C libft/

re: fclean all

.PHONY: clean fclean all re libft
