/*
** EPITECH PROJECT, 2021
** open.
** File description:
** open
*/

#include "include/my.h"

void open_file(char **av, ouvrir_t *openV2, struct stat *s)
{
    stat(av[1], s);
    openV2->str = malloc(sizeof(char) * (s->st_size));
    openV2->fd = open(av[1], O_RDONLY);
    openV2->fd_read = read(openV2->fd, openV2->str, s->st_size);
    openV2->str[openV2->fd_read] = '\0';
    close(openV2->fd);
}