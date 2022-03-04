/*
** EPITECH PROJECT, 2021
** Task 02 - my_putstr
** File description:
** print a entire strint with a fonction
*/
#include"../../include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
}
