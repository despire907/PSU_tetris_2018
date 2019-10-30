/*
** EPITECH PROJECT, 2018
** CPE_getnextline_2018
** File description:
** getnextline
*/

#include "get_next_line.h"

int my_strlen(char const *str)
{
    int bobo = 0;

    while (str[bobo] != '\0'){
        bobo = bobo + 1;
    }
    return (bobo);
}

static char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    } if (n < i)
        dest[i] = '\0';
    return dest;
}

static char *look_first_line(char *ptr, int j, char *buff, int *start)
{
    char *str;
    int i = 0;

    if (ptr != NULL) {
        i = my_strlen(ptr);
        if ((str = malloc(sizeof(str) * (i + j + 1))) == NULL)
            return NULL;
        my_strncpy(str, ptr, i);
    } else {
        if ((str = malloc(sizeof(str) * (i + j + 1))) == NULL)
            return NULL;
        my_strncpy(str, "", i);
    }
    str[i + j] = '\0';
    my_strncpy(str + i, buff + *start, j);
    if (ptr)
        free(ptr);
    *start = *start + (j + 1);
    return str;
}

char *get_next_line(int fd)
{
    static char buff[READ_SIZE];
    int i = 0;
    int start = 0;
    int j = 0;
    char *ptr = NULL;

    while (42) {
        if (start >= i) {
            start = 0;
            j = 0;
            if (!(i = read(fd, buff, READ_SIZE)))
                return ptr;
            else if (i == -1)
                return NULL;
        } if (buff[start + j] == '\n')
            return (ptr = look_first_line(ptr, j, buff, &start));
        if (start + j == i - 1)
            ptr = look_first_line(ptr, j + 1, buff, &start);
        j = j + 1;
    }
}