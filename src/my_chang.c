/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

int my_chang_level(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] < 58 && optarg[i] > 47)
            i++;
        else
            return 84;
    }
    info->level = my_getnbr(optarg);
    if (info->level < 0)
        return 84;
    return 0;
}

int my_chang_key_left(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] <= 'z' && optarg[i] >= 'a')
            i++;
        else
            return 84;
    }
    info->key_left = optarg;
    return 0;
}

int my_chang_key_right(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] <= 'z' && optarg[i] >= 'a')
            i++;
        else
            return 84;
    }
    info->key_right = optarg;
    return 0;
}

int my_chang_key_turn(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] <= 'z' && optarg[i] >= 'a')
            i++;
        else
            return 84;
    }
    info->key_turn = optarg;
    return 0;
}

int my_chang_key_drop(info_t *info)
{
    int i = 0;

    while (optarg[i] != '\0') {
        if (optarg[i] <= 'z' && optarg[i] >= 'a')
            i++;
        else
            return 84;
    }
    info->key_drop = optarg;
    return 0;
}