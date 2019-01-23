/*
** EPITECH PROJECT, 2018
** my_char_int_convert
** File description:
** function for convert char & int
*/

#include "my.h"

int my_char_toint(char c)
{
    if (my_char_isnumber(c) == 1){
        return c - '0';
    } else
        return -1;
}

char my_int_tochar(int nb)
{
    if (nb >= 0 && nb <= 9){
        return nb + '0';
    } else
        return '\0';
}
