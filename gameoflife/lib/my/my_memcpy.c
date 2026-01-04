/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** copy block of memory specif by source  in new placement
*/

#include "../../include/my.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    for (int i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}