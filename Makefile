##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	= my_runner

CC	= gcc -g

RM	= rm -f

SRCS	=	src/main.c				\
			src/check_start.c		\
			src/start_runner.c		\
			src/set_game_one.c		\
			src/set_obst.c			\
			src/set_game_two.c		\
			src/set_obst_one.c		\
			src/set_obst_two.c		\
			src/create_all.c		\
			src/runner_menu.c		\
			src/set_runner_menu.c	\
			src/moove_player.c		\
			src/option_menu.c		\
			src/runner_game.c		\
			src/set_runner_game.c	\
			src/set_runner_end.c	\
			src/jump_hit.c			\
			src/moove_runner_game.c \
			src/runner_end.c		\
			src/option_end.c		\
			src/music_select.c		\
			src/music.c				\
			src/destroy_all.c		\

OBJS	= $(SRCS:.c=.o)

LIB = -L ./lib/my/ -lmy

CFLAGS = -I ./include/ -W -Wall -Wextra

CSFML = -l csfml-audio -l csfml-graphics

CSFML2 = -l csfml-network -l csfml-system -l csfml-window

all: $(NAME)

$(NAME):	$(OBJS)
		make -C ./lib/my/
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB) $(CSFML) $(CSFML2)
		rm lib/libmy.a

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re: fclean all

.PHONY: all clean fclean re
