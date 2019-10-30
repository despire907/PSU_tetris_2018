/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

void my_q(info_t *info)
{
    int test;

    if ((test = my_chang_key_quit(info)) == 84)
        return;
}

void my_d(info_t *info)
{
    int test;

    if ((test = my_chang_key_drop(info)) == 84)
        return;
}

void my_w(info_t *info)
{
    info->next = 1;
}

void my_p(info_t *info)
{
    int test;

    if ((test = my_chang_key_pause(info)) == 84)
        return;
}

void my_D(info_t *info)
{
    my_chang_debug(info);
}