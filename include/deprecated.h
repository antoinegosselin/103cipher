/*
** EPITECH PROJECT, 2018
** deprecated
** File description:
** functions deprecated
*/

#ifndef DEPRECATED_H
#define DEPRECATED_H

#include "my.h"

/* -------------------- str deprecated functions ----------------------*/

//return the str who have the greater size
char *my_str_max_size(char *str1, char *str2);
char *my_str_intervcpy(char *dest, const char *src, int start, int end);
int my_str_intervcmp(const char *to_find, const char *src, int start, int end);

/* --------------------- memory deprecated functions ------------------*/
char *my_strtextalloc(char const *str);

#endif //DEPRECATED_H
