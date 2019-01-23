/*
** EPITECH PROJECT, 2018
** my_putnbr_hex.c
** File description:
** convert an unsigned int to hex and display it
*/

#include "my.h"

void my_putnbr_hex(unsigned int dec)
{
    char hex_num[100] = {'0'};
    int i = 0;

    while (dec != 0) {
        int nb = dec % 16;
        nb = (nb > 9) ? nb + 39 + '0' : nb + '0';
        hex_num[i] = nb;
        dec = dec / 16; 
        i++;
    }
    hex_num[i] = '\0';
    my_revstr(hex_num);
    my_putstr(hex_num);
}

void my_putnbr_HEX(unsigned int dec)
{
    char hex_num[100] = {'0'};
    int i = 0;

    while (dec != 0) {
        int nb = dec % 16;
        nb = (nb > 9) ? nb + 7 + '0' : nb + '0';
        hex_num[i] = nb;
        dec = dec / 16; 
        i++;
    }
    hex_num[i] = '\0';
    my_revstr(hex_num);
    my_putstr(hex_num);
}