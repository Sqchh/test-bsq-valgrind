/*
** EPITECH PROJECT, 2021
** struct.c
** File description:
** struct
*/

#include "./include/bsq.h"

ouvrir_t *ouvrir(void)
{
    ouvrir_t *ouvrir2;
    ouvrir2 = malloc(sizeof(ouvrir_t));
    ouvrir2->str = NULL;
    ouvrir2->strV2 = NULL;
    return (ouvrir2);
}