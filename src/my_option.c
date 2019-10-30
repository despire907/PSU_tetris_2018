/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

void my_l(info_t *info)
{
    int test;

    if ((test = my_chang_key_left(info)) == 84)
        return;
}

void my_L(info_t *info)
{
    int test;

    if ((test = my_chang_level(info)) == 84)
        return;
}

void my_r(info_t *info)
{
    int test;

    if ((test = my_chang_key_right(info)) == 84)
        return;
}

void my_t(info_t *info)
{
    int test;

    if ((test = my_chang_key_turn(info)) == 84)
        return;
}

void my_help(__attribute__((unused))info_t *info)
{
    display_help(info->av);
}