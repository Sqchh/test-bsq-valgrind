##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

SRC     =		my_putchar.c \
			my_putstr.c \
			main.c 	\
			todouble.c 	\
			cpy_tab.c 	\
			struct.c 	\

INC =   -include ./include/my.h

CFLAGS  =   -Wall -Wextra -g

OBJ =   $(SRC:.c=.o)

NAME    =   BSQ

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all
