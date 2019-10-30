
/*
** EPITECH PROJECT, 2019
** psu_tetris
** File description:
** tetriminos.h
*/

typedef struct tetri_s {
    char *name;
    char *tetrimino;
    int width;
    int height;
    int color;
    struct tetri_s *next;
}tetri_t;

tetri_t *read_ncreate(char *argv);
char *open_dir(char *directory);
char *my_cstrdup(char *src, char separator);
int my_cstrlen(char *str, char separator);
