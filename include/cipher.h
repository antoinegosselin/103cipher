/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** cipher
*/

#ifndef CIPHER_H
#define CIPHER_H

#include <stdio.h>
#include "my.h"
#include <math.h>

struct float_matrix {
    float **arr;
    int width;
    int height;
};
typedef struct float_matrix float_matrix_t;

void cipher(char **av);
int check_flag(char **av);
my_bool_t check_encrypted(char *phrase);
my_bool_t check_arg(char **av);
int get_key_size(char *str);
int get_nb_line(char *str, int size);
float *safe_malloc_float(long long size);
float_matrix_t *get_key(char *str, int size);
float_matrix_t *get_matrix(char *str, int size);
float **safe_malloc_float_array(int nb_line, int nb_col);
float_matrix_t *init_matrix_result(int nb_line, int nb_col);
float_matrix_t *matrix_to_s(float **arr, int width, int height);
float_matrix_t *do_mul(float_matrix_t *matrix, float_matrix_t *key);

//  show system   //
void show_message(float_matrix_t const *message);
void show_message_d(float_matrix_t const *matrix);
void print_usage(void);
void show_matrix(float_matrix_t const *arr);
void show_matrix_d(float_matrix_t const *arr);

//  decrypt parsing   //
char **my_str_to_word_arr(char const *str);
float_matrix_t *get_key_d(char *str, int size);
float_matrix_t *get_matrix_d(char const *str, int width);
float_matrix_t *do_mul_d(float_matrix_t *matrix, float_matrix_t *key);

#endif // CIPHER_H
