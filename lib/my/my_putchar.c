/*
** EPITECH PROJECT, 2020
** MY PUT CHAR
** File description:
** NO DESCRIPTION FOUND
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
