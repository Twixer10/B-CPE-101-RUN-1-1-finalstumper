/*
** EPITECH PROJECT, 2020
** PARSE LIST
** File description:
** NO DESCRIPTION
*/
#include "./include/rush3.h"

void rush1_1(char *s)
{
    my_putstr("[rush1-1] ");
    print_dim(s);
    my_putchar('\n');
}

void rush1_2(char *s)
{
    my_putstr("[rush1-2] ");
    print_dim(s);
    my_putchar('\n');
}

int error(char *s)
{
    char f = s[(my_strlen(s))-count_X(s)-1];
    char l = s[my_strlen(s)-2];

    if ((f != 'C' && l != 'C') &&
    (f != 'A' && l != 'C') &&
    (f != 'C' && l != 'A')) {
        my_putstr("none");
        my_putchar('\n');
        return (0);
    }
    return (1);
}

void rush_autre(char *s)
{
    char f = s[(my_strlen(s))-count_X(s)-1];
    char l = s[my_strlen(s)-2];

    if (f == 'C' && l == 'C') {
        my_putstr("[rush1-3] ");
        print_dim(s);
        my_putchar('\n');
    }
    if (f == 'A' && l == 'C') {
        my_putstr("[rush1-4] ");
        print_dim(s);
        my_putchar('\n');
    }
    if (f == 'C' && l == 'A') {
        my_putstr("[rush1-5] ");
        print_dim(s);
        my_putchar('\n');
    }
    error(s);
}

int rush1_345(char *s)
{
    int i = 0;
    int j = 0;

    while (s[i]) {
        if (s[i] == 'B' || s[i] == '\n')
            j = j + 1;
        i = i + 1;
    }
    if (my_strlen(s) == j) {
        cas_spe(s);
        return (1);
    } else {
        rush_autre(s);
        return (0);
    }
}
