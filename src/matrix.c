/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** matrix
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "cipher.h"

int get_nb_line(char *str, int size)
{
    int len = my_strlen(str);
    int temp = len % size;

    if (temp == 0)
        return (len / size);
    else
        return ((len / size) + 1);
}

float_matrix_t *matrix_to_s(float **arr, int width, int height)
{
    float_matrix_t *s = malloc(sizeof(float_matrix_t));

    s->arr = arr;
    s->width = width;
    s->height = height;
    return (s);
}

float_matrix_t *get_matrix(char *str, int size)
{
    int nb_line = get_nb_line(str, size);
    float **matrix = safe_malloc_float_array(nb_line, size);
    int counter = 0;
    int str_size = my_strlen(str);

    for (int i = 0; i < nb_line; i++){
        for (int j = 0; j < size; j++){
            if (counter < str_size)
                matrix[i][j] = (float)str[counter];
            else
                matrix[i][j] = 0;
            counter++;
        }
    }
    return (matrix_to_s(matrix, size, nb_line));
}