/*
** EPITECH PROJECT, 2020
** My ComputeSquare Square Root
** File description:
** No Description
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    int j = 0;
    
    while (i <= nb)
    {
        j = i * i;
        if (j == nb)
            return (i);
        i = i + 1;
    }
    return (0);
}
