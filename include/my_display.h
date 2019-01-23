/*
** EPITECH PROJECT, 2018
** my_display.h
** File description:
** function for display types
*/

#ifndef MY_DISPLAY_H
#define MY_DISPLAY_H

#include "my.h"

/* Epitech pool lib function */
void my_putchar(char c);
int my_put_nbr(int nb);
void my_put_unbr(unsigned int nb);
void my_putstr(char const *str);

//-------------------printf-------------------//
struct printf_red {
    char flags;
    void (*fptr)(va_list*);
};
typedef struct printf_red printf_red_t;

struct printf_pre_flag{
    char pre_flag;
    int (*fptr)(char *);
};

void putchar_red(va_list *arg); //flag c
void putstr_red(va_list *arg); //flag s
void putnbr_red(va_list *arg); //flag d, i
void putnbr_u_red(va_list*arg); //flag u
void putnbr_bin_red(va_list *arg); //flag b
void putnbr_hex_red(va_list *arg); //flag x
void putnbr_HEX_red(va_list *arg); //flag X
void putnbr_oct_red(va_list *arg); //flag o
void put_conv_type(char flag); //flag #

void my_printf(char const *pattern, ...);

static int const printf_nb_foncter = 8;
static printf_red_t const red[] = {
    {'c', &putchar_red},
    {'s', &putstr_red},
    {'d', &putnbr_red},
    {'i', &putnbr_red},
    {'u', &putnbr_u_red},
    {'o', &putnbr_oct_red},
    {'X', &putnbr_HEX_red},
    {'x', &putnbr_hex_red}
};
//-------------------------------------------//

/* affichage base n */
void my_putnbr_oct(unsigned int dec);
void my_putnbr_hex(unsigned int dec);
void my_putnbr_HEX(unsigned int dec);
void my_putnbr_bin(unsigned int dec);

/* err exit */
void my_put_errchar(char c);
void my_put_errstr(char const *str);

/* added my guilian ganster */
void my_putfloat(float nb);


#endif //MY_DISPLAY_H
