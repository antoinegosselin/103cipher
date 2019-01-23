/*
** EPITECH PROJECT, 2018
** removenegsign
** File description:
** remove the neg - sign
*/

#include "my.h"

char *my_remove_neg(char **str)
{
    int size = my_strlen(*str);
    char *new_str;

    if ((*str)[0] == '-'){
        new_str = my_stralloc(size - 1);
        my_str_intervcpy(new_str, *str, 2, size);
        free(*str);
        *str = new_str;
    }
    return *str;
}
