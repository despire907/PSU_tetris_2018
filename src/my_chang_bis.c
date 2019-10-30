/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

int my_chang_key_quit(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] <= 'z' && optarg[i] >= 'a')
            i++;
        else
            return 84;
    }
    info->key_quit = optarg;
    return 0;
}

int my_chang_key_pause(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] <= 'z' && optarg[i] >= 'a')
            i++;
        else
            return 84;
    }
    info->key_pause = optarg;
    return 0;
}

void my_chang_debug(info_t *info)
{
    info->debug = 1;
}

void my_map_size(info_t *info)
{
    info->map_y = 20;
    info->map_x = 10;
}