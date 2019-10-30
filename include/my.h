/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

typedef struct info {
    int level;
    char *key_left;
    char *key_right;
    char *key_turn;
    char *key_drop;
    char *key_quit;
    char *key_pause;
    int map_y;
    int map_x;
    int next;
    int debug;
    char **av;
}info_t;

void my_D(info_t *info);
void my_p(info_t *info);
void my_w(info_t *info);
void my_d(info_t *info);
void my_q(info_t *info);
void my_t(info_t *info);
void my_r(info_t *info);
void my_L(info_t *info);
void my_l(info_t *info);
void my_map_size(info_t *info);
info_t *init_info(char **av);
void display_help(char **av);
void display_debug(info_t *info);
int my_strlen(char const *str);
void my_putstr(char const *str);
void my_putchar(char c);
int	my_getnbr(char *str);
int my_chang_key_right(info_t *info);
int my_chang_key_turn(info_t *info);
int my_chang_key_drop(info_t *info);
int my_chang_level(info_t *info);
int my_chang_key_left(info_t *info);
void display_help(char **av);
void my_help(info_t *info);
void my_chang_debug(info_t *info);
void my_put_nbr(int nb);
void my_chang_debug(info_t *info);
int my_chang_key_pause(info_t *info);
int my_chang_key_quit(info_t *info);
char **my_str_to_wordtab(char *str);
int countchar(char *str);
int count_word(char *str);
void display_debug_bis(info_t *info);

#endif //MY_H
