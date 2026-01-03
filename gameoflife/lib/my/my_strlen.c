/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** return the length of a string
*/

#include "../../include/my.h"

int my_strlen(const char *str)
{
    int len = 0;

    if (str == NULL)
        return (0);
    while (str[len] != '\0')
        len++;
    return (len);
}