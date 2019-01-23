/*
** EPITECH PROJECT, 2018
** my_str_max_size
** File description:
** str_max_size
*/

#include "deprecated.h"

char *my_str_max_size(char *str1, char *str2)
{
    if (my_strlen(str1) > my_strlen(str2))
        return (str1);
    else if (my_strlen(str1) < my_strlen(str2))
        return (str2);
    return "\0";
}
