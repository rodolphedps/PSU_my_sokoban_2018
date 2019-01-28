/*
** EPITECH PROJECT, 2018
** errors soko
** File description:
** soko
*/

#include "my.h"

int errors(soko_t *str)
{
    int i = 0;

    while (str->buffer[i] != '\0') {
        if (str->buffer[i] != '#' && str->buffer[i] != 'O' &&
        str->buffer[i] != ' ' && str->buffer[i] != 'P' &&
        str->buffer[i] != 'X' && str->buffer[i] != '\n')
            exit(84);
        i++;
    }
}