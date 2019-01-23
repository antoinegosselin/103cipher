/*
** EPITECH PROJECT, 2018
** my_stralloc
** File description:
** alloc an empty str with malloc
*/

#include "my.h"

char *my_stralloc(int size)
{
    char *str = malloc(size * sizeof(char));

    for (int i = 0; i < size; i++){
        str[i] = '\0';
    }
    return str;
}
