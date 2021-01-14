# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 23:22:41 by kycho             #+#    #+#              #
#    Updated: 2021/01/14 23:56:41 by kycho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s

OBJS = $(SRCS:.s=.o)

AS = nasm
ASFLAGS = -f macho64

LIBC = ar -rcs

RM = rm -f

.s.o:
	$(AS) $(ASFLAGS) -o $@ -s $< 

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re .s.o