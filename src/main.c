/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "cipher.h"
#include "my.h"

void cipher(char **av)
{
    float_matrix_t *matrix;
    float_matrix_t *key;
    float_matrix_t *result;
    int size = get_key_size(av[2]);

    if (atoi(av[3]) == 0) {
        key = get_key(av[2], size);
        matrix = get_matrix(av[1], size);
        result = do_mul(matrix, key);
        printf("Key matrix:\n");
        show_matrix(key);
        printf("\nEncrypted message:\n");
        show_message(result);
    }
    if (atoi(av[3]) == 1) {
        key = get_key_d(av[2], size);
        matrix = get_matrix_d(av[1], size);
        result = do_mul_d(matrix, key);
        printf("Key matrix:\n");
        show_matrix_d(key);
        printf("\nDecrypted message:\n");
        show_message_d(result);
    }
}

my_bool_t check_encrypted(char *phrase)
{
    char **arr = my_str_to_word_arr(phrase);
    int i = 0;

    while (my_strcmp(arr[i], "\0") == 0) {
        if (my_str_isnum(arr[i]) == 0)
            return (FALSE);
        i++;
    }
    return (TRUE);
}

my_bool_t check_arg(char **av)
{
    if (my_strcmp(av[3], "0")) {
        return (TRUE);
    }
    else if (my_strcmp(av[3], "1")) {
        if (check_encrypted(av[1]) == FALSE)
            return (FALSE);
    } else {
        return (FALSE);
    }
    return (TRUE);
}

int main(int ac, char **av)
{
    if (ac == 2)
        return(check_flag(av));
    if (ac != 4) {
        write(2, "Wrong number of arguments\n", 26);
        return (84);
    }
    if (check_arg(av) == FALSE) {
        dprintf(2, "error\n");
        return (84);
    }
    cipher(av);
    return (0);
}