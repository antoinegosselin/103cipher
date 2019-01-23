/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "my.h"

static int redirect(va_list *arg, char *percent_pos)
{
    int offset = 0;

    if (percent_pos[1] == '%')
        my_putchar('%');
    if (percent_pos[1] == '#'){
        put_conv_type(percent_pos[2]);
        percent_pos++;
        offset++;
    }
    for (int i = 0; i < printf_nb_foncter; i++){
        if (red[i].flags == percent_pos[1]){
            red[i].fptr(arg);
            offset++;
            return offset;
        }
    }
    return 0;
}

void my_printf(char const *pattern, ...)
{
    int i = 0;
    va_list ap;
    char *str = my_strdup(pattern);

    va_start(ap, pattern);
    while (pattern[i] != '\0'){
        if (pattern[i] == '%'){
            i += redirect(&ap, str + i);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(ap);
}