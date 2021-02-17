/*
** EPITECH PROJECT, 2021
** cpy_tab.c
** File description:
** cpy tab
*/

#include "include/my.h"

char **cpy_tab(ouvrir_t *tab)
{
    int a = 0;
    int b = 0;
    int count = 0;

    for (int i = 0; tab->str[i] != '\0'; i++)
        if (tab->str[i] == '\n')
            count++;
    tab->str2 = malloc(sizeof(char *)*(count + 2));

    for (int i = 0; tab->str[i] != '\0'; i++) {
        if (tab->str[i] == '\n') {
            tab->str2[b] = malloc(sizeof(char)*(a + 1));
            b++;
            a = -1;
        }
        if (tab->str[i + 1] == '\0') {
            a++;
            tab->str2[b] = malloc(sizeof(char)*(a + 1));
        }
        a++;
    }
    a = 0;
    b = 0;
    for (int i = 0; tab->str[i] != '\0'; i++) {
        if (tab->str[i] == '\n')
            tab->str2[a][b] = '\0';
            a++;
            b = 0;
            i++;
        tab->str2[a][b] = tab->str[i];
        b++;
    }
    tab->str2[a][b] = '\0';
    tab->str2[a + 1] = NULL;
    return (tab->str2);
}