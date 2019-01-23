/*
** EPITECH PROJECT, 2018
** my_printf_flag2
** File description:
** my_printf_flag2
*/

#include "my.h"

void putnbr_bin_red(va_list *arg)
{
    my_putnbr_bin(va_arg(*arg, unsigned int));
}

void putnbr_hex_red(va_list *arg)
{
    my_putnbr_hex(va_arg(*arg, unsigned int));
}

void putnbr_HEX_red(va_list *arg)
{
    my_putnbr_HEX(va_arg(*arg, unsigned int));
}

void putnbr_oct_red(va_list *arg)
{
    my_putnbr_oct(va_arg(*arg, unsigned int));
}