/*
** EPITECH PROJECT, 2021
** rep_tab.c
** File description:
** reptab
*/

#include "include/my.h"

char **rep_tab(ouvrir_t *tab)
{
    for (int i = 0; tab->str3[i] != NULL; i++) {
        for (int j = 0; tab->str3[i][j] != '\0'; j++) {
            if (tab->str3[i][j] == 'O')
                tab->str3[i][j] = 'X';
        }
    }
    return (tab->str3);
}

char **rep_tab2(ouvrir_t *tab)
{
    for (int i = 0; tab->str3[i] != NULL; i++) {
        for (int j = 0; tab->str3[i][j] != '\0'; j++) {
            if (tab->str3[i][j] == 'X')
                tab->str3[i][j] = ' ';
        }
    }
    return (tab->str3);
}

char **sup_p(ouvrir_t *tab)
{
    for (int i = 0; tab->str3[i] != NULL; i++) {
        for (int j = 0; tab->str3[i][j] != '\0'; j++) {
            if (tab->str3[i][j] == 'P')
                tab->str3[i][j] = ' ';
        }
    }
    return (tab->str3);
}