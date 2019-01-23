/*
** EPITECH PROJECT, 2018
** my_find_is_prime_sup
** File description:
** find the first prime number superior than nb
*/

#include "my.h"

int my_find_is_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1)
        nb++;
    return nb;
}
