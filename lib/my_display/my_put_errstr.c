/*
** EPITECH PROJECT, 2018
** my_put_errstr
** File description:
** put an str on the standard err output
*/
#include "my.h"

void my_put_errstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        my_put_errchar(str[i]);
        i++;
    }
}
