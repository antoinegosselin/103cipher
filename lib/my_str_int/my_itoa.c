/*
** EPITECH PROJECT, 2018
** my_iota
** File description:
** convert int to char
*/

#include "my.h"

char *remove_stars(char **str)
{
    my_revstr(*str);
    int size = my_strlen(*str);
    int i = 0;
    char *new_str;

    while ((*str)[i] == '*' && (*str)[i] != '\0'){
        i++;
    }
    new_str = my_stralloc(size + 1);
    my_strncpy(new_str, *str + i, size);
    new_str[size] = '\0';
    my_revstr(new_str);
    free(*str);
    *str = new_str;
    return *str;
}

char *my_itoa(int nb)
{
    if (nb == 0)
        return "0";
    char *new_str = my_strdup("***************");
    int i = 0;
    long counter = 10000000000000;
    if (nb < 0){
        nb = nb * -1;
        i++;
        new_str[0] = '-';
    }
    while (counter > nb)
        counter = counter / 10;
    while (counter > 0){
        new_str[i] = nb / counter + 48;
        nb = nb - (nb / counter * counter);
        counter = counter / 10;
        i++;
    }
    remove_stars(&new_str);
    return new_str;
}
