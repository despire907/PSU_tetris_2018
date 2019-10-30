/*
** EPITECH PROJECT, 2018
** 101pong_2018
** File description:
** pong
*/

#include "my.h"

int	my_getnbr(char *str)
{
    int	nb = 0;
    int	isneg = 1;
    int	i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            isneg = isneg * -1;
        i = i + 1;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i = i + 1;
        }
        else
            return (nb * isneg);
    }
    return (nb * isneg);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int bobo;

    bobo = 0;
    while (str[bobo] != '\0') {
        write(1, &str[bobo], 1);
        bobo = bobo + 1;
    }
}

int my_strlen(char const *str)
{
    int bobo;

    bobo = 0;
    while (str[bobo] != '\0'){
        bobo = bobo + 1;
    }
    return (bobo);
}

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}