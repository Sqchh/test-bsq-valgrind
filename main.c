/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** bsq_main
*/

#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include "include/bsq.h"

int main(int ac, char **av)
{
    struct stat *s = malloc(sizeof(struct stat));

    if (ac != 2) {
        write(1, "error\n", 7);
        return (84);
    }
    else
    {
        ouvrir_t *ouvrir2;
        ouvrir2 = ouvrir();
        ouvrir2->strV2 = todouble_point(ouvrir2);
        open_file(av, ouvrir2, s);
        /*ouvrir2->tab = nb_line(ouvrir2);
        for (int i = 0; ouvrir2->tab[i]; i++) {
            for (int j = 0; ouvrir2->tab[i][j]; j++)
                printf("%d", ouvrir2->tab[i][j]);
        }*/
    }
}