/*
** EPITECH PROJECT, 2020
** FINAL STUMPER
** File description:
** NO DESCRIPTION
*/

#include <unistd.h>
#include "./include/rush3.h"
#include "rush3.c"

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len = 0;

    while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
