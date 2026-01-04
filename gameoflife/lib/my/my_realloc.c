/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** malloc memory with style (add more memory or delete it)
*/

#include "../../include/my.h"

int min_size(int a, int b)
{
    if (a > b) {
        return b;
    }
    return a;
}

void *my_realloc(void *ptr, size_t old_size, size_t new_size) {

    void *tmp = NULL;

    if (ptr == NULL)
        return malloc(new_size);
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }
    my_memcpy(tmp, ptr, min_size(old_size, new_size));
    free(ptr);
    return tmp;
    
}
