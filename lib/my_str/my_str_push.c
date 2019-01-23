/*
** EPITECH PROJECT, 2018
** my_str_push
** File description:
** function for push an str
*/

#include "my.h"

char *my_str_push(char **str, char c)
{
    int size = my_strlen(*str);
    char *new_str = my_stralloc(size + 1);

    my_strcpy(new_str, *str);
    new_str[size] = c;
    free(*str);
    *str = new_str;
    return *str;
}
