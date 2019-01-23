/*
** EPITECH PROJECT, 2018
** do_mul.c
** File description:
** do the matrix multiplication
*/

#include <math.h>
#include <stdlib.h>
#include "my.h"
#include "cipher.h"

float_matrix_t *init_matrix_result(int nb_line, int nb_col)
{
    float_matrix_t *result = malloc(sizeof(float_matrix_t) * 1);
    result->arr = safe_malloc_float_array(nb_line, nb_col);

    for (int count = 0; count < nb_line; count++) {
        result->arr[count] = safe_malloc_float(nb_col);
        for (int i = 0; i < nb_col; i++)
            result->arr[count][i] = 0;
    }
    result->width = nb_col;
    result->height = nb_line;
    return (result);
}

float_matrix_t *do_mul_d(float_matrix_t *matrix, float_matrix_t *key)
{
    float_matrix_t *result = init_matrix_result(matrix->height, key->width);

    for (int i = 0; i < matrix->height; i++) {
        for (int j = 0; j < key->width; j++) {
            for (int k = 0; k < key->width; k++) {
                result->arr[i][j] += matrix->arr[i][k] * key->arr[k][j];
            }
            result->arr[i][j] = round(result->arr[i][j]);
        }
    }
    return (result);
}

float_matrix_t *do_mul(float_matrix_t *matrix, float_matrix_t *key)
{
    float_matrix_t *result = init_matrix_result(matrix->height, key->width);

    for (int i = 0; i < matrix->height; i++) {
        for (int j = 0; j < key->width; j++) {
            for (int k = 0; k < key->width; k++) {
                result->arr[i][j] += matrix->arr[i][k] * key->arr[k][j];
            }
        }
    }
    return (result);
}