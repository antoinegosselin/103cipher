/*
** EPITECH PROJECT, 2018
** my_str_intervcmp
** File description:
** compare 2 str with an interval on the src
*/

#include "deprecated.h"

int my_str_intervcmp(const char *to_find, const char *src, int start, int end)
{
    char *dest = my_stralloc(end - start);
    my_str_intervcpy(dest, src, start, end);
    return my_strcmp(to_find, dest);
}
