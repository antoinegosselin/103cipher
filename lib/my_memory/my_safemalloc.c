/*
** EPITECH PROJECT, 2018
** my_safemalloc
** File description:
** safe implementation of malloc
*/

#include "my.h"

my_err_t my_safemalloc(void **mallocated, int size)
{
    *mallocated = malloc(size);
    if (*mallocated == NULL)
        return ERR_NOMEM;
    return OK;
}
