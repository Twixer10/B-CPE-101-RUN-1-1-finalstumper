/*
** EPITECH PROJECT, 2020
** MY GET NBR CHAR
** File description:
** NO DESCRIPTION FOUND
*/

int my_getnbrchar(char str)
{
    if (str < '0' && str > '9' )
            return (0);
    else
        return (str - 48);
}
