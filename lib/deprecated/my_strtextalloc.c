/*
** EPITECH PROJECT, 2018
** my_strtextalloc
** File description:
** alloc with mallo of str
*/

#include "my.h"

char *my_strtextalloc(char const *str)
{
    int size = my_strlen(str);
    char *new_str = my_stralloc(size);

    my_strcpy(new_str, str);
    return new_str;
}
