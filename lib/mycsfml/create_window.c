/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** main file
*/
#include "../../include/my.h"

sfRenderWindow *create_window(global glob)
{
    sfVideoMode mode = {1920, 1080, 32};

    glob.window = sfRenderWindow_create(mode, TITLE, sfDefaultStyle, NULL);
    return glob.window;
}
