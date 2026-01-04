/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** read the file
*/

#include "../../include/my.h"

char *read_file(int fd)
{
    int bytes = 0;
    char buffer[1];
    int count = 0;
    char *file = NULL;

    bytes = read(fd, buffer, sizeof(buffer));
    if (bytes == -1)
        return NULL;
    while (bytes > 0) {
        count += bytes;
        bytes = read(fd, buffer, sizeof(buffer));
        file = malloc(bytes + 1);
        if (file == NULL) {
            return NULL;
        }
        for (int i = 0; buffer[i] != 0; i++) {
            file[bytes] = buffer[i];
        }
    }
    printf("%s", file);
    return file;
}