/*
** EPITECH PROJECT, 2018
** check moves
** File description:
** soko
*/

#include "my.h"

void check_move_u_d(soko_t *str)
{
    int i = str->pos_i;
    int j = str->pos_j;

    look_for_player(str);
    if (str->key_input == 'A' && str->map[i - 1][j] != '#') {
        if (str->map[i - 1][j] == 'X' && str->map[i - 2][j] == 'X');
        else
            move_up(str);
    }
    if (str->key_input == 'B' && str->map[i + 1][j] != '#') {
        if (str->map[i + 1][j] == 'X' && str->map[i + 2][j] == 'X');
        else
            move_down(str);
    }
}

void check_move_l_r(soko_t *str)
{
    int i = str->pos_i;
    int j = str->pos_j;

    look_for_player(str);
    if (str->key_input == 'C' && str->map[i][j + 1] != '#') {
        if (str->map[i][j + 1] == 'X' && str->map[i][j + 2] == 'X');
        else
            move_right(str);
    }
    if (str->key_input == 'D' && str->map[i][j - 1] != '#') {
        if (str->map[i][j - 1] == 'X' && str->map[i][j - 2] == 'X');
        else
            move_left(str);
    }
}
