/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** detect if an number is prime or not
*/

#include "my.h"

my_bool_t my_is_prime(int nb)
{
    int racine = my_compute_square_root(nb);

    if (nb == 2)
        return TRUE;
    if (nb == 1 || nb <= 0)
        return FALSE;
    if (nb % 2 == 0)
        return FALSE;
    for (int i = 3; i < racine; i += 2){
        if (nb % i == 0 && i != nb){
            return FALSE;
        }
    }
    return TRUE;
}
