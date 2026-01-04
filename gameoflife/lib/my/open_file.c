/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** open file and return file descrip
*/

#include "../../include/my.h"

int open_file(const char *file)
{
    int fd = 0;
    
    fd = open(file, O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 84;
    }
    return fd;
}