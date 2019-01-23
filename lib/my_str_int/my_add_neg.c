/*
** EPITECH PROJECT, 2018
** my_add_neg
** File description:
** my_add_neg
*/

#include "my.h"

char *my_add_neg(char **str)
{
    int size = my_strlen(*str);
    char *new_str = my_stralloc(size + 2);

    new_str[0] = '-';
    my_strcpy(new_str + 1, *str);
    free(*str);
    *str = new_str;
    return *str;
}
