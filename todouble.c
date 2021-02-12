/*
** EPITECH PROJECT, 2021
** todouble.c
** File description:
** todouble
*/

#include"./include/bsq.h"
#include <stdlib.h>
#include <stdio.h>

char **todouble_point(ouvrir_t *op)
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; op->str[i] != '\0'; i++) {
        if (op->str[i] == '\n')
            c++;
    }
    op->strV2 = malloc(sizeof(char *)*(c + 2));
    for (int i = 0; op->str[i] != '\0'; i++) {
        if (op->str[i] == '\n') {
            op->strV2[b] = malloc(sizeof(char)*(a + 1));
            b++;
            a = -1;
        }
        if (op->str[i + 1] == '\0') {
            a++;
            op->strV2[b] = malloc(sizeof(char)*(a + 1));
            b++;
            a = -1;
        }
        a++;
    }
    a = 0;
    b = 0;
    for (int j = 0; op->str[j] != '\0'; j++) {
        if (op->str[j] == '\n') {
            op->strV2[a][b] = '\0';
            a++;
            j++;
            b = 0;
        }
        op->strV2[a][b] = op->str[j];
        b++;
    }
    op->strV2[a][b] = '\0';
    op->strV2[a + 1] = NULL;
    for (int i = 0; op->strV2[i]; i++) {
        for (int j = 0; op->strV2[i][j]; j++)
            printf("%c", op->strV2[i][j]);
    }
    return (op->strV2);
}