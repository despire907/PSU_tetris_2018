/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

info_t *init_info(char **argv)
{
    info_t *info = malloc(sizeof(info_t));

    info->level = 1;
    info->key_left = "^EOD";
    info->key_right = "^EOC";
    info->key_turn = "^EOA";
    info->key_drop = "^EOB";
    info->key_quit = "q";
    info->key_pause = "(space)";
    info->map_y = 20;
    info->map_x = 10;
    info->next = 0;
    info->debug = 0;
    info->av = argv;

    return info;
}

void display_help(char **av)
{
    my_putstr("Usage:  ");
    my_putstr(av[0]);
    my_putstr(" [options]\n"
    "Options:\n"
    "--help               Display this help\n"
    "-L --level={num}     Start Tetris at level num (def: 1)\n"
    "-l --key-left={K}    Move the tetrimino LEFT using the K key "
    "(def: left arrow)\n"
    "-r --key-right={K}   Move the tetrimino RIGHT using the K key "
    "(def: right arrow)\n"
    "-t --key-turn={K}    TURN the tetrimino clockwise 90d using the "
    "K key (def: top arrow)\n"
    "-d --key-drop={K}    DROP the tetrimino using the K key "
    "(def: down arrow)\n"
    "-q --key-quit={K}    QUIT the game using the K key "
    "(def: ‘q’ key)\n"
    "-p --key-pause={K}   PAUSE/RESTART the game using the K key "
    "(def: space bar)\n"
    "--map-size={row,col} Set the numbers of rows and columns of the "
    "map (def: 20,10)\n"
    "-w --without-next    Hide next tetrimino (def: false)\n"
    "-D --debug           Debug mode (def: false)\n");
}

void display_debug(info_t *info)
{
    my_putstr("*** DEBUG MODE ***\nKey Left :  ");
    my_putstr(info->key_left);
    my_putstr("\nKey Right :  ");
    my_putstr(info->key_right);
    my_putstr("\nKey Turn :  ");
    display_debug_bis(info);
    my_putstr("Press any key to start Tetris\n");
}

void display_debug_bis(info_t *info)
{
    my_putstr(info->key_turn);
    my_putstr("\nKey Drop :  ");
    my_putstr(info->key_drop);
    my_putstr("\nKey Quit :  ");
    my_putstr(info->key_quit);
    my_putstr("\nKey Pause :  ");
    my_putstr(info->key_pause);
    my_putstr("\nNext :  ");
    if (info->next == 0)
        my_putstr("Yes");
    else
        my_putstr("No");
    my_putstr("\nLevel :  ");
    my_put_nbr(info->level);
    my_putstr("\nSize :  ");
    my_put_nbr(info->map_y);
    my_putstr("*");
    my_put_nbr(info->map_x);
    my_putstr("\n");
}