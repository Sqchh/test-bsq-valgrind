/*
** EPITECH PROJECT, 2021
** cpy_tab.c
** File description:
** cpy_tab
*/

#include "./include/bsq.h"
#include <stdlib.h>

int **nb_line(ouvrir_t *ouvrir)
{
    int count = 0;
    int counter = 0;
    int x = 0;

    for (int i = 0; ouvrir->strV2[i] != NULL; i++)
        count++;
    ouvrir->tab = malloc(sizeof(int *)*(count));
    for (int i = 1; ouvrir->strV2[i] != NULL; i++) {
        for (int j = 0; ouvrir->strV2[i][j] != '\0'; j++)
            counter++;
        ouvrir->tab[x] = malloc(sizeof(int)*(counter));
        counter = 0;
        x++;
    }
    x = 0;
    for (int i = 1; ouvrir->strV2[i] != NULL; i++)
        for (int j = 0; ouvrir->strV2[i][j] != '\0'; j++) {
            if (ouvrir->strV2[i][j] == '.')
                ouvrir->tab[x][j] = 1;
            if (ouvrir->strV2[i][j] == 'o')
                ouvrir->tab[x][j] = 0;
        }
        x++;
    return (ouvrir->tab);
}