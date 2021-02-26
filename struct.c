/*
** EPITECH PROJECT, 2021
** struct.c
** File description:
** struct
*/

#include "./include/my.h"

ouvrir_t *ouvrir(void)
{
    ouvrir_t *ouvrir2;
    ouvrir2 = malloc(sizeof(ouvrir_t));
    ouvrir2->str = NULL;
    ouvrir2->fd = 0;
    ouvrir2->fd_read = 0;
    ouvrir2->ch = 0;
    ouvrir2->tab_line = 0;
    ouvrir2->tab_col = 0;
    ouvrir2->count = 0;
    return (ouvrir2);
}