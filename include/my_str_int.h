/*
** EPITECH PROJECT, 2018
** str_int
** File description:
** function for str_int operation
*/

#ifndef STR_INT_H
#define STR_INT_H

#include "my.h"

/* added by zoraneus */
int my_char_toint(char c); //return -1 if error
char my_int_tochar(int nb); //return \0 if error
int my_str_isneg(char const *str); //-1 if error, 1 if neg
char *my_remove0(char **str); //remove all 0 at the beginning of an num/str
char *my_remove_neg(char **str); //remove the neg - sign
char *my_add_neg(char **str); //add the neg - sign

//retourne mathematiquement le str le plus eleve fuite memoire !!!
char *my_str_max(char *str1, char *str2);
char *my_str_min(char *str1, char *str2);
int my_atoi(char const *str); 
char *my_itoa(int nb);

#endif //STR_INT_H
