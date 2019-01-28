/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my
*/

#pragma once

#include "struct.h"
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

void check_move(soko_t *str);
void move_left(soko_t *str);
void move_right(soko_t *str);
void move_down(soko_t *str);
void move_up(soko_t *str);
void look_for_player(soko_t *str);
int check_storage_num(soko_t *str);
void check_storage(soko_t *str);
void check_blocks(soko_t *str);
void nb_lines(soko_t *str);
void nb_cols(soko_t *str);
void disp_map(soko_t *str);
int errors(soko_t *str);
void check_move_u_d(soko_t *str);
void check_move_l_r(soko_t *str);
void compare_maps(soko_t *str);
void map2_tab(soko_t *str);
void malloc_map2_char(soko_t *str);
void malloc_map_char(soko_t *str);
void map_tab(soko_t *str);
void make_functions(soko_t *str);
void is_verified(soko_t *str, int i, int j);