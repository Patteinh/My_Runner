/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display strings
*/

#include "my.h"

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}
