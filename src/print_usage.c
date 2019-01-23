/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** print_usage
*/

#include <unistd.h>
#include "my.h"

void print_usage(void)
{
    my_putstr("\nUSAGE\n    ./103cipher message key flag\n\nDESCRIPTION\n");
    my_putstr("    message     a message, made of ASCII characters\n");
    my_putstr("    key         the encryption key, made of ASCII characters");
    my_putstr("\n    flag        0 for the message to be encrypted, 1 to ");
    my_putstr("be decrypted\n\n");
}

int check_flag(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h' && my_strlen(av[1]) == 2) {
        print_usage();
        return (0);
    } else {
        write(2, "Wrong number of arguments\n", 26);
        return (84);
    }
}