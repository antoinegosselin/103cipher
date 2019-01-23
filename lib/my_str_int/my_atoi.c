/*
** EPITECH PROJECT, 2018
** my_atoi
** File description:
** convert str to int
*/

#include "my.h"

int my_atoi(char const *str)
{
    int neg_flag = (my_str_isneg(str) == 1) ? 1 : 0;
    int size = my_strlen(str) - neg_flag;
    int result = 0;

    for (int i = 1; i < size + 1; i++){
        char c = str[size - i + neg_flag];
        int nb = (c - '0') * my_compute_power_rec(10, i - 1);
        result += nb;
    }
    result = (neg_flag == 1) ? result * -1 : result;
    return (result);
}
