/*
** EPITECH PROJECT, 2020
** GET ONLY NUMBER
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdlib.h>

int my_strlen(char *c);

char *my_getonlynbr(char *str)
{
    int i = 0;
    int j = 0;
    char *news = malloc(sizeof(char) * my_strlen(str) + 1);

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9' )) {
            news[j] = str[i];
            j = j + 1;
        }
        i = i + 1;
    }
    return (news);
}
