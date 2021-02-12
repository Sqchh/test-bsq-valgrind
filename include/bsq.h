/*
** EPITECH PROJECT, 2020
** bsq.h
** File description:
** bsq
*/

#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

typedef struct ouvrir
{
    char *str;
    char **strV2;
    int **tab;
    int fd;
    int fd_read;
}ouvrir_t;

int my_putstr(char const *str);
void my_putchar(char c);
ouvrir_t *ouvrir(void);
char **todouble_point(ouvrir_t *op);
int **nb_line(ouvrir_t *ouvrir);
void open_file(char **av, ouvrir_t *openV2, struct stat *s);