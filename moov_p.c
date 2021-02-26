/*
** EPITECH PROJECT, 2021
** movv_p.c
** File description:
** moov
*/

#include "include/my.h"

void pos_tab(ouvrir_t *tab)
{
    int a = 0;
    for (int i = 0; tab->str[i] != '\0'; i++) {
        if (tab->str[i] == 'O')
            tab->count++;
    }
    tab->tab_col = malloc(sizeof(int)*(tab->count));
    tab->tab_line = malloc(sizeof(int)*(tab->count));

    for (int i = 0; tab->str2[i] != NULL; i++) {
        for (int j = 0; tab->str2[i][j] != '\0'; j++) {
            if (tab->str2[i][j] == 'O') {
                tab->tab_col[a] = i;
                tab->tab_line[a] = j;
                a++;
            }
        }
    }
}

void moov(ouvrir_t *tab)
{
    int a = 0;
    int b = 0;
    for (int i = 0; tab->str2[i] != NULL; i++) {
        for (int j = 0; tab->str2[i][j] != '\0'; j++) {
            if (tab->str2[i][j] == 'P') {
                a = i;
                b = j;
            }
        }
    }
    if (tab->ch == KEY_DOWN)
        if (tab->str2[a + 1][b] == ' ' || tab->str2[a + 1][b] == 'O') {
            tab->str2[a][b] = ' ';
            a++;
            tab->str2[a][b] = 'P';
        }
        for (int i = 0; i < tab->count; i++) {
            if (tab->str2[tab->tab_line[i]][tab->tab_col[i]] == ' ')
                tab->str2[tab->tab_line[i]][tab->tab_col[i]] = 'O';
        }
    if (tab->ch == KEY_UP)
        if (tab->str2[a - 1][b] == ' ' || tab->str2[a - 1][b] == 'O') {
            tab->str2[a][b] = ' ';
            a--;
            tab->str2[a][b] = 'P';
        }
        for (int i = 0; i < tab->count; i++) {
            if (tab->str2[tab->tab_line[i]][tab->tab_col[i]] == ' ')
                tab->str2[tab->tab_line[i]][tab->tab_col[i]] = 'O';
        }
    if (tab->ch == KEY_RIGHT)
        if (tab->str2[a][b + 1] == ' ' || tab->str2[a][b + 1] == 'O') {
            tab->str2[a][b] = ' ';
            b++;
            tab->str2[a][b] = 'P';
        }
        for (int i = 0; i < tab->count; i++) {
            if (tab->str2[tab->tab_line[i]][tab->tab_col[i]] == ' ')
                tab->str2[tab->tab_line[i]][tab->tab_col[i]] = 'O';
        }
    if (tab->ch == KEY_LEFT)
        if (tab->str2[a][b - 1] == ' ' || tab->str2[a][b - 1] == 'O') {
            tab->str2[a][b] = ' ';
            b--;
            tab->str2[a][b] = 'P';
        }
        for (int i = 0; i < tab->count; i++) {
            if (tab->str2[tab->tab_line[i]][tab->tab_col[i]] == ' ')
                tab->str2[tab->tab_line[i]][tab->tab_col[i]] = 'O';
        }
}