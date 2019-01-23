/*
** EPITECH PROJECT, 2018
** my_putnbr_bin
** File description:
** convert to bin and display it
*/

#include "my.h"

void my_putnbr_bin(unsigned int dec)
{
    char bin_num[100] = {'0'};
    int i = 0;

    while (dec != 0) {
        bin_num[i] = dec % 2 + '0';
        dec = dec / 2; 
        i++;
    }
    bin_num[i] = '\0';
    my_revstr(bin_num);
    my_putstr(bin_num);
}