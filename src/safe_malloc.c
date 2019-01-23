/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** safe_malloc
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

float *safe_malloc_float(long long size)
{
    float *var = malloc(sizeof(float) * size);

    if (var == 0)
        exit(84);
    return (var);
}

float **safe_malloc_float_array(int nb_line, int nb_col)
{
    float **array = malloc(sizeof(float *) * nb_line);

    if (array == 0)
        exit(84);
    for (int count = 0; count < nb_line; count++) {
        array[count] = malloc(sizeof(float) * nb_col);
        if (array[count] == 0)
            exit(84);
    }
    return (array);
}