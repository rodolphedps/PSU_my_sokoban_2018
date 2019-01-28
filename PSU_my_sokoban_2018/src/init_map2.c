/*
** EPITECH PROJECT, 2018
** init map2
** File description:
** soko
*/

#include "my.h"

void is_verified(soko_t *str, int i, int j)
{
    str->nb_box = 0;

    while (str->map[i][j] != '\0') {
        if (str->map2[i][j] == 'O' && str->map[i][j] == ' ')
            str->map[i][j] = 'O';
        if (str->map[i][j] == 'X' && str->map[i][j] == 'O')
            str->nb_box++;
        j++;
    }
}

void compare_maps(soko_t *str)
{
    int i = 0;
    int j = 0;

    while (str->map[i] != NULL) {
        is_verified(str, i, j);
        i++;
    }
}

void map2_tab(soko_t *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    errors(str);
    while (k != str->size) {
        str->map2[i][j] = str->buffer[k];
        if (str->buffer[k] == '\n') {
            k++;
            i++;
            j = 0;
        }
        else {
            j++;
            k++;
        }
    }
}

void malloc_map2_char(soko_t *str)
{
    int i = 0;

    nb_lines(str);
    nb_cols(str);
    str->map2 = malloc(sizeof(char *) * (str->nb_lines + 1));
    while (i < str->nb_lines + 1) {
        str->map2[i] = malloc(sizeof(char) * (str->nb_cols + 1));
        i++;
    }
    str->map2[i] = NULL;
}

void make_functions(soko_t *str)
{
    malloc_map_char(str);
    malloc_map2_char(str);
    map_tab(str);
    map2_tab(str);
}