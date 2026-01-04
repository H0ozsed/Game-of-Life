/*
** EPITECH PROJECT, 2025
** MY_H
** File description:
** MY_H
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <string.h>
    #include <stdio.h>
    #include <stddef.h>
    #include <stdbool.h>
    #include <dirent.h>
    #include <sys/stat.h>

int my_strlen(const char *str);
void *my_memcpy(void *dest, const void *src, size_t n);
int open_file(const char *file);
char *read_file(int fd);
void *my_realloc(void *ptr, size_t old_size, size_t new_size);

int gameoflife(int ac, char **av);




#endif