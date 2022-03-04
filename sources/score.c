/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** score
*/
#include "../include/my.h"

void score(global *glob)
{
    sfText_setString(glob->text, my_itoa(glob->player.score));
    sfText_setFont(glob->text, glob->font);
    sfText_setCharacterSize(glob->text, 100);
    sfRenderWindow_drawText(glob->window, glob->text, NULL);
}
