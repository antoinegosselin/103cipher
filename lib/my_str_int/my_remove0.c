/*
** EPITECH PROJECT, 2018
** my_remove0
** File description:
** remove0 at the beginning of an num/str
*/

#include "my.h"

char *my_remove0(char **str)
{
    int size = my_strlen(*str);
    int i = 0;
    char *new_str;

    while ((*str)[i] == '0' && (*str)[i] != '\0'){
        i++;
    }
    new_str = my_stralloc(size - 1);
    my_str_intervcpy(new_str, *str, i + 1, size);
    *str = new_str;
    return *str;
}
