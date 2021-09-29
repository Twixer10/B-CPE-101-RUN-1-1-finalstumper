/*
** EPITECH PROJECT, 2020
** My Get Nbr
** File description:
** 
*/

int my_getnbr(char *str)
{
    int i = 0;
    int j = 0;

    if (str[0] == '-' || str[0] == '\0')
        i = i + 1;
    
    while (str[i] != '\0') {
        if ((str[i] < '0' && str[i] > '9' ) || str[i] != '-')
            return (0);
        j = j + (str[i] - 48);
        j = j * 10;
        i = i + 1;
    }
    j = j / 10;
    if (str[0] == '-')
        return (j * -1);
    else
        return (j);
}
