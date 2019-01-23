/*
** EPITECH PROJECT, 2018
** my_strremovechar
** File description:
** my_strreplace
*/

#include "my.h"

my_err_t my_strremovechar(char **str, int index)
{
    char *new_str = malloc(sizeof(char) * (my_strlen(*str) + 1));

    if (index > my_strlen(*str))
        return ERR_STRLEN;
    if (index == 0){
        my_strcpy(new_str, *str + 1);
        free(*str);
        *str = new_str;
        return OK;
    }
    my_strncpy(new_str, *str, index);
    my_strcpy(new_str + index, *str + index + 1);
    new_str[my_strlen(*str)] = '\0';
    free(*str);
    *str = new_str;
    return OK;
}
