/*
** EPITECH PROJECT, 2018
** my_putnbr
** File description:
** display all value of an int
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10){
        int mod = nb % 10;
        nb = (nb - mod) / 10;
        my_put_nbr(nb);
        my_putchar(48 + mod);
    } else {
        my_putchar(nb + '0');
    }
    return nb;
}

void my_put_unbr(unsigned int nb)
{
    if (nb >= 10){
        int mod = nb % 10;
        nb = (nb - mod) / 10;
        my_put_unbr(nb);
        my_putchar(48 + mod);
    } else {
        my_putchar(nb + '0');
    }
}