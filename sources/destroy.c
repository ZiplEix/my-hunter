/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** main file
*/
#include "../include/my.h"

void destroy_all_two(global glob)
{
    sfSprite_destroy(glob.background.sprite);
    sfSprite_destroy(glob.duck1.sprite);
    sfSprite_destroy(glob.duck2.sprite);
    sfSprite_destroy(glob.duck3.sprite);
    sfSprite_destroy(glob.duck4.sprite);
    sfSprite_destroy(glob.duck5.sprite);
    sfSprite_destroy(glob.startcreen.sprite);
    sfSprite_destroy(glob.gameoverscreen.sprite);
    sfSprite_destroy(glob.visor.sprite);
}

void destroy_all(global glob)
{
    sfTexture_destroy(glob.background.texture);
    sfTexture_destroy(glob.duck1.texture);
    sfTexture_destroy(glob.duck2.texture);
    sfTexture_destroy(glob.duck3.texture);
    sfTexture_destroy(glob.duck4.texture);
    sfTexture_destroy(glob.duck5.texture);
    sfTexture_destroy(glob.gameoverscreen.def_texture);
    sfTexture_destroy(glob.gameoverscreen.menu_texture);
    sfTexture_destroy(glob.gameoverscreen.restart_texture);
    sfTexture_destroy(glob.startcreen.def_texture);
    sfTexture_destroy(glob.startcreen.easy_texture);
    sfTexture_destroy(glob.startcreen.medium_texture);
    sfTexture_destroy(glob.startcreen.hard_texture);
    sfTexture_destroy(glob.visor.texture);

    sfRenderWindow_destroy(glob.window);
    sfClock_destroy(glob.temp.clock);

    destroy_all_two(glob);
}
