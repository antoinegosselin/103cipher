/*
** EPITECH PROJECT, 2018
** my_putnbr_oct
** File description:
** convert to oct b8 & disp
*/

#include "my.h"

void my_putnbr_oct(unsigned int dec)
{
    char octal_num[100] = {'0'};
    int i = 0;

    while (dec != 0) {
        octal_num[i] = dec % 8 + '0';
        dec = dec / 8; 
        i++;
    }
    octal_num[i] = '\0';
    my_revstr(octal_num);
    my_putstr(octal_num);
}