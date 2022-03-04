/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my itoa
*/
#include "../../include/my.h"

char *my_itoa(int nbr)
{
    int temp = nbr;
    int nbr_size = 0;
    char *str;
    char *zero = malloc(sizeof(char) * 2);
    if (nbr == 0) {
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }
    while (temp > 0) {
        temp = temp / 10;
        nbr_size++;
    }
    str = malloc(sizeof(char) * (nbr_size + 1));
    str[nbr_size] = '\0';
    while (nbr_size--) {
        str[nbr_size] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return str;
}
