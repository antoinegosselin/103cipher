/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** decrypt_parsing
*/

#include "cipher.h"

static int word_lenght(char const *str)
{
    int i = 0;

    while (str[i] != ' ' && str[i] != '\0')
        i++;
    return (i);
}

static int count_word(char const *str)
{
    int i = 0;
    int counter = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ')
            counter++;
        i++;
    }
    return (counter + 1);
}

char **my_str_to_word_arr(char const *str)
{
    int word_counter = 0;
    int i = 0;
    char **arr;
    int copied = 0;

    while (str[i] != '\0') {
        i++;
        if (str[i] == ' ')
            word_counter++;
    }
    word_counter++;
    arr = malloc(sizeof(char*) * (word_counter + 1));
    for (i = 0; i < word_counter; i++) {
        int size = word_lenght(str + copied);
        arr[i] = my_strndup(str + copied, size);
        copied += size + 1;
    }
    arr[word_counter] = my_strdup("\0");
    return (arr);
}

float_matrix_t *get_matrix_d(char const *str, int width)
{
    int height = ceil((double)count_word(str) / (double)width);
    float **arr_f = malloc(sizeof(float*) * height);
    char **arr = my_str_to_word_arr(str);
    int copied = 0;

    for (int i = 0; i < height; i++)
        arr_f[i] = malloc(sizeof(float) * width);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (my_strcmp(arr[copied], "\0") == FALSE) {
                arr_f[i][j] = atoi(arr[copied]);
                copied++;
            } else {
                arr_f[i][j] = 0;
            }
        }
    }
    return (matrix_to_s(arr_f, width, height));
}