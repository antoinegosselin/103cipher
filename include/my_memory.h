/*
** EPITECH PROJECT, 2018
** my_memory
** File description:
** functions for memory
*/

#ifndef MY_MEMORY_H
#define MY_MEMORY_H

#include "my.h"

/* epitech standards pool lib functions */

//void my_swap(int *a, int *b);
//int my_showstr(char const *str);
//int my_showmem(char const *str, int size);
//void my_sort_int_array(int *tab, int size);

/* added by guilian */
char *my_stralloc(int size);
my_err_t my_safemalloc(void **mallocated, int size);

#endif //MY_MEMORY_H
