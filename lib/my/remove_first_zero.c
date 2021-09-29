/*
** EPITECH PROJECT, 2020
** REMOVE FIRST ZERO FROM CHAR
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdlib.h>

int my_strlen(char *c);

int remove_first_zero1(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == '0') {
            k = k + 1;
            j = j + 1;
        }
        i = i + 1;
    }
    return (k);
}


char *remove_first_zero(char *str)
{
    int i = 0;
    
    int j = remove_first_zero1(str);
    char *news = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[j] != '\0') {
        news[i] = str[j];
        j = j + 1;
        i = i + 1;
    }
    return (news);
}