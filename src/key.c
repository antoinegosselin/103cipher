/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** key
*/

#include <unistd.h>
#include "cipher.h"
#include "my.h"

int get_key_size(char *str)
{
    int len = my_strlen(str);
    int size = 1;

    for (int count = 1; len > (count * count); count++)
        size++;
    return (size);
}

float_matrix_t *get_key(char *str, int size)
{
    float **key = safe_malloc_float_array(size, size);
    int len = my_strlen(str);
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (count < len)
                key[i][j] = (float)str[count];
            else
                key[i][j] = 0;
            count++;
        }
    }
    return (matrix_to_s(key, size, size));
}
