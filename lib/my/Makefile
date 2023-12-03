##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SRCS    =	my_putchar.c	\
			my_putstr.c		\
			my_strlen.c		\
			my_put_nbr.c	\
			my_strcmp.c		\

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

RM	=	rm -rf

CFLAGS	+=	-I ./include/ -Wextra -Wall

all	:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp my.h ../../include/
	cp libmy.a ../
	rm *.o

clean	:
	$(RM) $(OBJS)

fclean :	clean
	$(RM) $(NAME)

re	:	fclean all

.PHONY:	all clean fclean re
