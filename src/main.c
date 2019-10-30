/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

int check_flags(info_t *info, int c)
{
    char str[12] = "LlrtdqpwDhm";
    int nb = 0;
    void (*ptr[12])(info_t *) = {my_L, my_l, my_r, my_t, my_d, my_q, my_p, my_w
    , my_D, my_help, my_map_size};
    while (str[nb] != '\0') {
        if (c == str[nb])
            ptr[nb](info);
        nb++;
    }
    return 0;
}

int check_arg(int ac, char **av, info_t *info)
{
    int c;
    int optint;
    static struct option long_option[] = {
            {"level", required_argument, 0, 'L'},
            {"Key-left", required_argument, 0, 'l'},
            {"Key-right", required_argument, 0, 'r'},
            {"Key-turn", required_argument, 0, 't'},
            {"Key-drop", required_argument, 0, 'd'},
            {"Key-quit", required_argument, 0, 'q'},
            {"Key-pause", required_argument, 0, 'p'},
            {"map-size", required_argument, 0, 'm'},
            {"without-next", no_argument, 0, 'w'},
            {"debug", no_argument, 0, 'D'},
            {"help", no_argument, 0, 'h'},
            {0, 0, 0, 0}
    };
    while ((c = getopt_long(ac, av, "L:l:r:t:d:q:p:wDhm:", long_option,
    &optint)) != EOF) {
        if (c == '?')
            return 84;
        check_flags(info, c);
    }
    return 0;
}

int main(int ac, char **av)
{
    int re;
    info_t *info = init_info(av);
    if ((re = check_arg(ac, av, info)) == 84)
        return 84;
    if (info->debug == 1)
        display_debug(info);
    return 0;
}
