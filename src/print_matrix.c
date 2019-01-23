/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** print_matrix
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "cipher.h"

void show_matrix_d(float_matrix_t const *arr)
{
    for (int i = 0; i < arr->height; i++){
        for (int j = 0; j < arr->width; j++) {
            if (arr->arr[i][j] == 0) {
                if (j == (arr->width - 1))
                    printf("0.0\n");
                else
                    printf("0.0     ");
            } else {
                if (j == (arr->width - 1))
                    printf("%.3f\n", arr->arr[i][j]);
                else
                    printf("%-8.3f", arr->arr[i][j]);
            }
        }
    }
}

void show_matrix(float_matrix_t const *arr)
{
    for (int i = 0; i < arr->height; i++){
        for (int j = 0; j < arr->width; j++) {
            if (j == (arr->width - 1))
                printf("%d\n", (int)arr->arr[i][j]);
            else
                printf("%-8d", (int)arr->arr[i][j]);
        }
    }
}

void show_message(float_matrix_t const *message)
{
    for (int i = 0; i < message->height; i++){
        for (int j = 0; j < message->width; j++) {
            if (i == (message->height - 1) && j == (message->width - 1))
                printf("%d\n", (int)message->arr[i][j]);
            else
                printf("%d ", (int)message->arr[i][j]);
        }
    }
}

void show_message_d(float_matrix_t const *matrix)
{
    for (int i = 0; i < matrix->height; i++) {
        for (int j = 0; j < matrix->width; j++) {
            if ((int)matrix->arr[i][j] <= 31 || (int)matrix->arr[i][j] >= 127)
                break;
            printf("%c", (int)matrix->arr[i][j]);
        }
    }
    printf("\n");
}
