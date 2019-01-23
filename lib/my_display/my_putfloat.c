/*
** EPITECH PROJECT, 2018
** my_putfloat
** File description:
** display an float
*/

#include "my.h"

void my_putfloat(float nb)
{
    if (nb < 0){
        nb = nb * -1;
        my_putchar('-');
    }
    my_put_nbr((int)nb);
    nb -= (int)nb;
    nb = nb * 100;
    my_putchar('.');
    if ((int)nb == 0){
        my_putchar('0');
    }
    my_put_nbr((int)nb);
}
