/*
** EPITECH PROJECT, 2018
** my_file_readbyte
** File description:
** my_file_readbyte
*/

#include "my.h"

char my_file_readbyte(fd_t fd)
{
    char c;
    int size_read;

    size_read = read(fd, &c, 1);
    if (size_read != 1)
        c = '\0';
    return c;
}