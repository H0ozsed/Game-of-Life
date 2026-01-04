/*
** EPITECH PROJECT, 2025
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    int fd = 0;
    
    fd = open_file(av[1]);
    read_file(fd);
    gameoflife(ac, av);
    printf("%d", fd);
    return 0;
}
