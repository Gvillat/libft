# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guvillat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 12:03:59 by guvillat          #+#    #+#              #
#    Updated: 2018/11/12 12:04:01 by guvillat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIBFT = ft_isascii.c \
		ft_lstdel.c \
		ft_memccpy.c\
		ft_power.c\
		ft_putnbr_fd.c\
		ft_strcpy.c\
		ft_strlcat.c\
		ft_strncpy.c\
		ft_strsub.c\
		ft_atoi.c\
		ft_isdigit.c\
		ft_lstdelone.c\
		ft_memchr.c\
		ft_pushchar.c\
		ft_putstr.c\
		ft_strdel.c\
		ft_strlen.c\
		ft_strnequ.c\
		ft_strtrim.c\
		ft_bzero.c\
		ft_isescaped.c\
		ft_lstiter.c\
		ft_memcmp.c\
		ft_putchar.c\
		ft_putstr_fd.c\
		ft_strdup.c\
		ft_strlower.c\
		ft_strnew.c\
		ft_tolower.c\
		ft_countwords.c\
		ft_isprint.c\
		ft_lstmap.c\
		ft_memcpy.c\
		ft_putchar_fd.c\
		ft_strcat.c\
		ft_strequ.c\
		ft_strmap.c\
		ft_strnstr.c\
		ft_toupper.c\
		ft_decade.c\
		ft_itoa.c\
		ft_lstnew.c\
		ft_memdel.c\
		ft_putendl.c\
		ft_strchr.c\
		ft_striter.c\
		ft_strmapi.c\
		ft_strrchr.c\
		ft_isalnum.c\
		ft_itoa_base.c\
		ft_lstpush.c\
		ft_memmove.c\
		ft_putendl_fd.c\
		ft_strclr.c\
		ft_striteri.c\
		ft_strncat.c\
		ft_strsplit.c\
		ft_isalpha.c\
		ft_lstadd.c\
		ft_memalloc.c\
		ft_memset.c\
		ft_putnbr.c\
		ft_strcmp.c\
		ft_strjoin.c\
		ft_strncmp.c\
		ft_strstr.c\

OBJ = $(LIBFT:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -c $(LIBFT)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: re fclean clean all
