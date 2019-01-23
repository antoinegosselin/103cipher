/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** function for display an entire str
*/

#include "my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
