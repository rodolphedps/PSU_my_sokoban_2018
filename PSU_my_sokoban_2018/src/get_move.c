/*
** EPITECH PROJECT, 2018
** moves
** File description:
** moves
*/

#include "my.h"

void move_up(soko_t *str)
{
    int i = str->pos_i;
    int j = str->pos_j;

    if (str->map[i - 2][j] != '#' && str->map[i - 1][j] == 'X') {
        str->map[i - 1][j] = 'P';
        str->map[i - 2][j] = 'X';
    }
    if (str->map[i - 1][j] == 'X' && str->map[i - 2][j] == 'O') {
        str->map[i - 1][j] = 'P';
        str->map[i - 2][j] = 'X';
    }
    if (str->map[i - 1][j] == 'X' && str->map[i - 2][j] == '#') {
        str->map[i][j] = 'P';
        str->map[i - 1][j] = 'X';
    }
    else if (str->map[i - 1][j] != '#') {
        str->map[i - 1][j] = 'P';
        str->map[i][j] = ' ';
    }
}

void move_down(soko_t *str)
{
    int i = str->pos_i;
    int j = str->pos_j;

    if (str->map[i + 2][j] != '#' && str->map[i + 1][j] == 'X') {
        str->map[i + 1][j] = 'P';
        str->map[i + 2][j] = 'X';
    }
    if (str->map[i + 1][j] == 'X' && str->map[i + 2][j] == 'O') {
        str->map[i + 1][j] = 'P';
        str->map[i + 2][j] = 'X';
    }
    if (str->map[i + 1][j] == 'X' && str->map[i + 2][j] == '#') {
        str->map[i + 1][j] = 'X';
        str->map[i][j] = 'P';
    }
    else if (str->map[i + 1][j] != '#') {
        str->map[i + 1][j] = 'P';
        str->map[i][j] = ' ';
    }
}

void move_right(soko_t *str)
{
    int i = str->pos_i;
    int j = str->pos_j;

    if (str->map[i][j + 2] != '#' && str->map[i][j + 1] == 'X') {
        str->map[str->pos_i][j + 1] = 'P';
        str->map[str->pos_i][j + 2] = 'X';
    }

    if (str->map[i][j + 1] == 'X' && str->map[i][j + 2] == 'O') {
        str->map[str->pos_i][j + 1] = 'P';
        str->map[str->pos_i][j + 2] = 'X';
    }
    if (str->map[i][j + 1] == 'X' && str->map[i][j + 2] == '#') {
        str->map[i][j] == 'P';
        str->map[i][j + 1] == 'X';
    }
    else if (str->map[i][j + 1] != '#') {
        str->map[str->pos_i][j + 1] = 'P';
        str->map[str->pos_i][j] = ' ';
    }
}

void move_left(soko_t *str)
{
    int i = str->pos_i;
    int j = str->pos_j;

    if (str->map[i][j - 2] != '#' && str->map[i][j - 1] == 'X') {
        str->map[i][j - 1] = 'P';
        str->map[i][j - 2] = 'X';
    }
    if (str->map[i][j - 1] == 'X' && str->map[i][j - 2] == 'O') {
        str->map[i][j - 1] = 'P';
        str->map[i][j - 2] = 'X';
    }
    if (str->map[i][j - 1] == 'X' && str->map[i][j - 2] == '#') {
        str->map[i][j - 1] = 'X';
        str->map[i][j] = 'P';
    }
    else if (str->map[i][j - 1] != '#') {
        str->map[i][j - 1] = 'P';
        str->map[i][j] = ' ';
    }
}