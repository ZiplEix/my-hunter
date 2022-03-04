/*
** EPITECH PROJECT, 2021
** my strlen
** File description:
** the len of the string
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != 0) {
        count++;
    }
    return (count);
}
