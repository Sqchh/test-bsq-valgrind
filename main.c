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
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'){
        my_putstr("USAGE\n");
        my_putstr("      ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("      map file representing the warehouse map, ");
        my_putstr(" containing '#' for walls, \n 'P' for the player, 'X'");
        my_putstr(" for boxes and 'O' for storage locations.");
        return (0);
    }
    struct stat *s = malloc(sizeof(struct stat));
    ouvrir_t *sokoban;
    sokoban = ouvrir();
    if (ac != 2) {
        write(2, "too many arguments", 19);
        return (84);
    }
    open_file(av, sokoban, s);
    sokoban->str2 = cpy_tab(sokoban);
    sokoban->str3 = rep_tab2(sokoban);
    sokoban->str3 = sup_p(sokoban);
    sokoban->str3 = rep_tab(sokoban);
    initscr();
    keypad(stdscr, TRUE);
    curs_set(FALSE);
    while (sokoban->ch != KEY_F(2)) {
        clear();
        for (int i = 0; sokoban->str2[i] != NULL; i++)
            printw("%s\n", sokoban->str2[i]);
        refresh();
        sokoban->ch = getch();
        moov(sokoban);
    }
    endwin();
    return (0);
}