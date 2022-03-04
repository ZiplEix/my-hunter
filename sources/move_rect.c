/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** andle sprite sheet
*/
#include "../include/my.h"

void modified_sheet(sfIntRect *rect, int offset, int max)
{
    rect->left += offset;
    if (rect->left == max) {
        rect->left = 0;
    }
}
