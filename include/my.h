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
    int fd;
    int fd_read;
    char *str;
    char **str2;
    char **str3;
}ouvrir_t;

int my_putstr(char const *str);
void my_putchar(char c);
void pop_up(char **av);
int my_strlen(char const *str);
void open_file(char **av, ouvrir_t *openV2, struct stat *s);
ouvrir_t *ouvrir(void);
char **cpy_tab(ouvrir_t *tab);
