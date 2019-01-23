/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** my_main
*/

#include "cipher.h"

int main(void)
{
    float_matrix_t *matrix = malloc(sizeof(float_matrix_t) * 1);

    matrix->width = 3;
    matrix->height = 3;
    matrix->arr = safe_malloc_float_array(3, 3);
    matrix->arr[0][0] = 0;
    matrix->arr[0][1] = 0.485878;
    matrix->arr[0][2] = -0.1455778;
    matrix->arr[1][0] = 0;
    matrix->arr[1][1] = 0.457273;
    matrix->arr[1][2] = 0;
    matrix->arr[2][0] = 0.127583;
    matrix->arr[2][1] = 0.1468;
    matrix->arr[2][2] = 0;
    show_matrix_d(matrix);
}