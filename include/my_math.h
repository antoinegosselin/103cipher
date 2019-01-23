/*
** EPITECH PROJECT, 2018
** my_math
** File description:
** include functions for advanced math operations
*/

#ifndef MY_MATH_H
#define MY_MATH_H

#include "my.h"

/* epitech standard lib pool function */
my_bool_t my_isneg(int nb);
int my_compute_power_rec(int nb, int power); //return 0 if error
int my_compute_square_root(int nb);
my_bool_t my_is_prime(int nb);
int my_find_is_prime_sup(int nb);

int my_max(int nb_arg, ...);
int my_min(int nb_arg, ...);

#endif //MY_MATH_H
