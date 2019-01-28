/*
** EPITECH PROJECT, 2018
** struct sokoban
** File description:
** soko
*/

#pragma once

typedef struct soko_s {
    int fd;
    int rd;
    int sta;
    int size;
    char *buffer;
    char **map;
    char **map2;
    int nb_box;
    int nb_lines;
    int nb_cols;
    int get_o;
    int get_x;
    int pos_i;
    int pos_j;
    int pos_xi;
    int pos_xj;
    char key_input;
}              soko_t;