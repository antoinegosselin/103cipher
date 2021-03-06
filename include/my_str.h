/*
** EPITECH PROJECT, 2018
** my_str.h
** File description:
** contain all prototype of functions for str & char operation
*/

#ifndef MY_STR_H
#define MY_STR_H

#include "my.h"

/* Epitech standard lib pool function */

int my_strlen(char const *str);
int my_getnbr(char const *str);

my_bool_t my_str_isnum(char const *str); //float with . ok
my_bool_t my_str_isint(char const *str); 

char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find); //return \0 if not match
my_bool_t my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *str);
char *my_strncpy(char *dest, char const *src, int n); //invalid write !!!
char *my_strcat(char **s1, char const *s2); //invalid write !!!
char *my_strncat(char **s1, char const *s2, int n); //invalid write !!!
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
my_bool_t my_strncmp(char const *s1, char const *s2, int n);

/* fonction created by guilian ganster */
char *my_strreplace(char **str, char const *to_find, char const *substitute);
char *my_str_push(char **str, char c);
my_err_t my_strremovechar(char **str, int index);
int my_line_lenght(char const *str);
int my_count_line(char const *str);
char **my_str_to_line_arr(char const *str);

/*  my char is   */
my_bool_t my_char_isnumber(char c);
my_bool_t my_char_isuppercase(char c);
my_bool_t my_char_islowercase(char c);
my_bool_t my_char_isletter(char c);
my_bool_t my_char_isalphanumeric(char c);


#endif //MY_STR_H
