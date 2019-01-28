/*
** EPITECH PROJECT, 2018
** disp nb
** File description:
** soko
*/

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include "struct.h"
#include "my.h"

void nb_lines(soko_t *str)
{
    int i = 0;
    int lines_nb = 1;

    while (str->buffer[i] != '\0') {
        if (str->buffer[i] == '\n')
            lines_nb++;
        i++;
    }
    str->nb_lines = lines_nb;
}

void nb_cols(soko_t *str)
{
    int i = 0;

    while (str->buffer[i] != '\n') {
        i++;
    }
    str->nb_cols = i;
}

void disp_map(soko_t *str)
{
    int i = 0;
    int j = 0;

    while (str->map[i] != NULL) {
        while (str->map[i][j] != '\0') {
            addch(str->map[i][j]);
            j++;
        }
        i++;
        move(i, 0);
        j = 0;
    }
}