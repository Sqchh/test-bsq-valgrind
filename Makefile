##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

SRC     =		my_putchar.c \
			my_putstr.c \
			main.c 	\
			open.c 	\
			struct.c 	\
			cpy_tab.c 	\
			rep_tab.c 	\
			moov_p.c 	\

INC =   -include ./include/my.h

CFLAGS  =   -Wall -Wextra -g

NCURSE	=	-lncurses

OBJ =   $(SRC:.c=.o)

NAME    =   my_sokoban

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(INC) $(NCURSE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all
