# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdelicia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/01 17:06:04 by cdelicia          #+#    #+#              #
#    Updated: 2019/10/04 23:29:07 by cdelicia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libasm.a
SRC = ft_strlen.s ft_write.s ft_read.s ft_strdup.s ft_strcpy.s ft_strcmp.s
OBJ = $(SRC:.s=.o)
CCFLAGS = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.s
	nasm -f macho64 $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 
	rm -f a.out
	rm -f test

re: fclean all

start:
	$(CCFLAGS) -L. -lasm main.c
