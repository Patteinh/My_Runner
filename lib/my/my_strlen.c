/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** count char in string
*/

#include "my.h"

int my_strlen(char const *str)
{
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }
    return (size);
}
