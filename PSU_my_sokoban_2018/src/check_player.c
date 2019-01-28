/*
** EPITECH PROJECT, 2018
** check player
** File description:
** player
*/

#include "my.h"

void look_for_player(soko_t *str)
{
    int i = 0;
    int j = 0;

    while (str->map[i] != NULL) {
        if (str->map[i][j] == 'P') {
            str->pos_i = i;
            str->pos_j = j;
        }
        j++;
        if (str->map[i][j] == '\0') {
            i++;
            j = 0;
        }
    }
}

int check_storage_num(soko_t *str)
{
    int i = 0;
    int j = 0;
    str->get_o = 0;

    while (str->map[i] != NULL) {
        if (str->map[i][j] == 'O')
            str->get_o++;
        j++;
        if (str->map[i][j] == '\0') {
            i++;
            j = 0;
        }
    }
    return (str->get_o);
}

void check_boxes_num(soko_t *str)
{
    int i = 0;
    int j = 0;
    str->get_x = 0;

    while (str->map[i][j] != '\0') {
        if (str->map[i][j] == 'X')
            str->get_x++;
        j++;
        if (str->map[i][j] == '\0') {
            i++;
            j = 0;
        }
    }
    if (str->get_x != str->get_o)
        exit(84);
}
