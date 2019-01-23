/*
** EPITECH PROJECT, 2018
** my_str_intervcpy
** File description:
** copy in dest an interval of src
*/

#include "deprecated.h"

char *my_str_intervcpy(char *dest, const char *src, int start, int end)
{
    int j=0;

    for (int i = start - 1; i < end; i++){
        dest[j] = src[i];
        j++;
    }
    dest[j] = '\0';
    return dest;
}
