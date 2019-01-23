/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** decrypt_key
*/

#include "cipher.h"
#include "my.h"

int get_det(float **key, int size)
{
    int det = 0;

    if (size == 1)
        det = key[0][0];
    if (size == 2)
        det = ((key[0][0] * key[1][1]) - (key[0][1] * key[1][0]));
    if (size == 3) {
        det = (key[0][0] * key[1][1] * key[2][2]);
        det = det + (key[0][1] * key[1][2] * key[2][0]);
        det = det + (key[0][2] * key[1][0] * key[2][1]);
        det = det - (key[0][2] * key[1][1] * key[2][0]);
        det = det - (key[0][0] * key[1][2] * key[2][1]);
        det = det - (key[0][1] * key[1][0] * key[2][2]);
    }
    return (det);
}

float_matrix_t *get_key_d(char *str, int size)
{
    float_matrix_t *key = get_key(str, size);
    float **key_d = safe_malloc_float_array(size, size);
    int det = get_det(key->arr, size);

    if (det == 0) {
        dprintf(2, "error: determinant is null\n");
        exit(84);
    }
    if (size == 1)
        key_d[0][0] = (1.0 / (float)det);
    if (size == 2) {
        key_d[0][0] = (key->arr[1][1] / det);
        key_d[0][1] = ((-1 * key->arr[0][1]) / det);
        key_d[1][0] = ((-1 * key->arr[1][0]) / det);
        key_d[1][1] = (key->arr[0][0] / det);
    }
    if (size == 3) {
        key_d[0][0] = (((key->arr[1][1] * key->arr[2][2]) - (key->arr[1][2] * key->arr[2][1])) / det);
        key_d[0][1] = (((key->arr[0][2] * key->arr[2][1]) - (key->arr[0][1] * key->arr[2][2])) / det);
        key_d[0][2] = (((key->arr[0][1] * key->arr[1][2]) - (key->arr[0][2] * key->arr[1][1])) / det);
        key_d[1][0] = (((key->arr[1][2] * key->arr[2][0]) - (key->arr[1][0] * key->arr[2][2])) / det);
        key_d[1][1] = (((key->arr[0][0] * key->arr[2][2]) - (key->arr[0][2] * key->arr[2][0])) / det);
        key_d[1][2] = (((key->arr[0][2] * key->arr[1][0]) - (key->arr[0][0] * key->arr[1][2])) / det);
        key_d[2][0] = (((key->arr[1][0] * key->arr[2][1]) - (key->arr[1][1] * key->arr[2][0])) / det);
        key_d[2][1] = (((key->arr[0][1] * key->arr[2][0]) - (key->arr[0][0] * key->arr[2][1])) / det);
        key_d[2][2] = (((key->arr[0][0] * key->arr[1][1]) - (key->arr[0][1] * key->arr[1][0])) / det);
    }
    return (matrix_to_s(key_d, size, size));
}