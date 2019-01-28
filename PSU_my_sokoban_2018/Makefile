##
## EPITECH PROJECT, 2018
## Makefile sokoban
## File description:
## make
##

INC_DIR =       ./include

CC      =       gcc

SRC     =	src/retest.c	\
		src/get_move.c	\
		src/check_player.c	\
		src/disp_nb.c	\
		src/errors.c	\
		src/check_moves.c	\
		src/init_map2.c	\

LDFLAGS =       -lcurses -g3

NAME    =       my_sokoban

all:    $(NAME)

$(NAME) :       $(OBJ)
		$(CC) -o $(NAME) -I $(INC_DIR) $(SRC) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
