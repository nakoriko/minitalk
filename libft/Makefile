# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:21:31 by nakoriko          #+#    #+#              #
#    Updated: 2024/07/31 13:04:46 by nakoriko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
	ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
	ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
	ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
	ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
	ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
	ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c \
	ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
	
OBJ = $(SRCS:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c  ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

BONUS_OBJ = $(BONUS:.c=.o)

CC = cc

CFLAG = -Wall -Werror -Wextra

NAME = libft.a

HEADER = libft.h

all: printf $(NAME)

printf: 
	$(MAKE) -C ft_printf/

$(NAME) : $(OBJ)
	ar -rcs $@ $^

%.o:%.c $(HEADER)
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ) all_lib.a
	$(MAKE) clean -C ft_printf/
	
fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ft_printf/

re: fclean all

bonus: $(OBJ) $(BONUS_OBJ)
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY: clean fclean all re bonus
