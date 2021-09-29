/*
** EPITECH PROJECT, 2020
** B-CPE-101-RUN-1-1-finalstumper-thomas.techer
** File description:
** rush3
*/
#include "./include/my.h"
#include "parse.c"

int count_X(char *s)
{
    int i = 0;
    int x = 0;

    while (s[i] != '\n' && s[i]) {
        x++;
        i++;
    }
    return (x);
}

int count_Y(char *s)
{
    int i = 0;
    int y = 0;

    while (s[i]) {
        if (s[i] == '\n')
            y++;
        i++;
    }
    return (y);
}

void print_dim(char *s)
{
    my_put_nbr(count_X(s));
    my_putchar(' ');
    my_put_nbr(count_Y(s));
}

int rush3(char *s)
{
    if (s[0] == 'o') {
        rush1_1(s);
        return (1);
    }
    if (s[0] == '*' || s[0] == '/') {
        rush1_2(s);
        return (1);
    }
    rush1_345(s);
    return (0);
}

void cas_spe(char *s)
{
    my_putstr("[rush1-3] ");
    print_dim(s);
    my_putstr(" || [rush1-4] ");
    print_dim(s);
    my_putstr(" || [rush1-5] ");
    print_dim(s);
    my_putchar('\n');
}