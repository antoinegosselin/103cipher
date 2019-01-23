/*
** EPITECH PROJECT, 2018
** my_printf_flag
** File description:
** my_printf_flag
*/

#include "my.h"

void putchar_red(va_list *arg)
{
    my_putchar(va_arg(*arg, int));
}

void putstr_red(va_list *arg)
{
    my_putstr(va_arg(*arg, char*));
}

void putnbr_red(va_list *arg)
{
    my_put_nbr(va_arg(*arg, int));
}

void putnbr_u_red(va_list *arg)
{
    my_put_unbr(va_arg(*arg, unsigned int));
}

void put_conv_type(char flag)
{
    switch (flag) {
        case 'o':
            my_putchar('0');
            break;
        case 'X':
            my_putstr("0X");
            break;
        case 'x':
            my_putstr("0x");
            break;
    }
}