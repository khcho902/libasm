# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 23:22:41 by kycho             #+#    #+#              #
#    Updated: 2021/01/15 23:06:30 by kycho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJS = $(SRCS:.s=.o)

AS = nasm
ASFLAGS = -f macho64
LIBC = ar -rcs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.s.o:
	$(AS) $(ASFLAGS) -o $@ -s $< 

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) test

re : fclean all

test : re
	$(CC) $(CFLAGS) -o test test.c $(NAME)
	./test

.PHONY : all clean fclean re test .s.o
