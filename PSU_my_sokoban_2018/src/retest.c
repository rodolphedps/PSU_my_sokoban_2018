/*
** EPITECH PROJECT, 2018
** retest
** File description:
** re
*/

#include "my.h"

void map_tab(soko_t *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    errors(str);
    while (k != str->size) {
        str->map[i][j] = str->buffer[k];
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

void malloc_map_char(soko_t *str)
{
    int i = 0;

    nb_lines(str);
    nb_cols(str);
    str->map = malloc(sizeof(char *) * (str->nb_lines + 1));
    while (i < str->nb_lines + 1) {
        str->map[i] = malloc(sizeof(char) * (str->nb_cols + 1));
        i++;
    }
    str->map[i] = NULL;
}

int init_struct(soko_t *str, char *filepath)
{
    struct stat openfile;
    str->fd = open(filepath, O_RDONLY);
    str->sta = stat(filepath, &openfile);
    str->rd = 0;
    str->size = openfile.st_size;
    str->buffer = malloc(sizeof(char) * str->size + 1);
    str->rd = read(str->fd, str->buffer, str->size);
    str->buffer[str->size] = '\0';
    if (str->rd == -1)
        exit (84);
    if (str->fd == -1)
        exit (84);
    close(str->fd);
}

void input(soko_t *str)
{
    str->key_input = getch();
    check_move_u_d(str);
    check_move_l_r(str);
    if (str->key_input == ' ')
        map_tab(str);
}

int main(int ac, char **av)
{
    soko_t *str = malloc(sizeof(soko_t));
    if (ac != 2)
        return (84);
    init_struct(str, av[1]);
    make_functions(str);
    initscr();
    noecho();
    curs_set(0);
    disp_map(str);
    while (check_storage_num(str) != str->nb_box) {
        clear();
        compare_maps(str);
        disp_map(str);
        refresh();
        input(str);
    }
    endwin();
    return (0);
}