/*
** EPITECH PROJECT, 2018
** my_str_minmax
** File description:
** compute if an str is sup or inf
*/
#include "my.h"

static char *str_max_exception_negative(char *str1, char *str2)
{
    if (my_str_isneg(str1) == 1 && my_str_isneg(str2) == 1){
        char *new_str1 = my_strtextalloc(str1);
        char *new_str2 = my_strtextalloc(str2);
        my_remove_neg(&new_str1);
        my_remove_neg(&new_str2);
        if (my_str_max(new_str1, new_str2) == new_str1)
            return (str2);
        else if (my_str_max(new_str1, new_str2) == new_str2)
            return (str1);
    }
    if (my_str_isneg(str1) == 1 && my_str_isneg(str2) == 0)
        return (str2);
    if (my_str_isneg(str1) == 0 && my_str_isneg(str2) == 1)
        return (str1);
    return "\0";
}

static char *str_max_exception_size(char *str1, char *str2)
{
    if (my_strlen(str1) > my_strlen(str2))
        return (str1);
    else if (my_strlen(str1) < my_strlen(str2))
        return (str2);
    return "\0";
}

char *my_str_max(char *str1, char *str2)
{
    char *new_str1 = my_strtextalloc(str1);
    char *new_str2 = my_strtextalloc(str2);

    if (str_max_exception_negative(new_str1, new_str2)[0] != '\0')
        return (str_max_exception_negative(new_str1, new_str2));
    if (str_max_exception_size(new_str1, new_str2)[0] != '\0')
        return (str_max_exception_size(new_str1, new_str2));
    int size = my_strlen(new_str1);
    for (int i = 0; i < size; i++){
        if (new_str1[i] > new_str2[i])
            return (str1);
        else if (new_str1[i] < new_str2[i])
            return (str2);
    }
    return str1;
}

char *my_str_min(char *str1, char *str2)
{
    if (my_strcmp(my_str_max(str1, str2), str1) == 1)
        return (str2);
    else if (my_strcmp(my_str_max(str1, str2), str2) == 1)
        return (str1);
    return "\0";
}
