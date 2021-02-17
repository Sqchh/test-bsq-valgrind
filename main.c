/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include <ncurses.h>
#include "include/my.h"

int main(int ac, char **av)
{
    int ch = 0;
    struct stat *s = malloc(sizeof(struct stat));
    ouvrir_t *sokoban;
    sokoban = ouvrir();
    sokoban->str2 = cpy_tab(sokoban);
    if (ac != 2) {
        write(2, "too many arguments", 19);
        return (84);
    }
    open_file(av, sokoban, s);
    initscr();
    keypad(stdscr, TRUE);
    curs_set(FALSE);
    while (ch != KEY_F(2)) {
        clear();
        for (int i = 0; sokoban->str2[i] != NULL; i++)
            printw("%s", sokoban->str2[i]);
        refresh();
        ch = getch();
    }
    endwin();
    return (0);
}