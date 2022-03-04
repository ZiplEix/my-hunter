/*
** EPITECH PROJECT, 2021
** My_hunter
** File description:
** fill struct
*/
#include "../include/my.h"

background fill_struct_background(global glob)
{
    sfIntRect rectangle = {0, 0, 1920, 1080};

    glob.background.sprite = sfSprite_create();
    glob.background.texture = sfTexture_createFromFile(BACKGROUNG, &rectangle);
    sfSprite_setTexture(glob.background.sprite,
    glob.background.texture, sfFalse);

    return glob.background;
}

temp fill_struct_time(global glob)
{
    glob.temp.clock = sfClock_create();
    glob.temp.seconde = 0.0;

    return glob.temp;
}

gameoverscreen fill_struct_gameoverscreen(global glob)
{
    glob.gameoverscreen.rect.top = 0;
    glob.gameoverscreen.rect.left = 0;
    glob.gameoverscreen.rect.height = 1080;
    glob.gameoverscreen.rect.width = 1920;

    glob.gameoverscreen.menu_texture = sfTexture_createFromFile(
        GAMEOVERSCREENMENU, &glob.gameoverscreen.rect);

    glob.gameoverscreen.restart_texture = sfTexture_createFromFile(
        GAMEOVERSCREENRESTART, &glob.gameoverscreen.rect);

    glob.gameoverscreen.sprite = sfSprite_create();
    glob.gameoverscreen.def_texture = sfTexture_createFromFile(
        GAMEOVERSCREEN, &glob.gameoverscreen.rect);
    sfSprite_setTexture(glob.gameoverscreen.sprite,
    glob.gameoverscreen.def_texture, sfFalse);

    return glob.gameoverscreen;
}

void fill_struct2(global glob)
{
    glob.visor = fill_struct_visor(glob);
}

global fill_struct()
{
    global glob;
    glob.duck.rect.top = 0;
    glob.duck.rect.left = 0;
    glob.duck.rect.height = 110;
    glob.duck.rect.width = 330;
    glob.duck1 = fill_struct_duck1(glob);
    glob.duck2 = fill_struct_duck2(glob);
    glob.duck3 = fill_struct_duck3(glob);
    glob.duck4 = fill_struct_duck4(glob);
    glob.duck5 = fill_struct_duck5(glob);
    glob.window = create_window(glob);
    glob.background = fill_struct_background(glob);
    glob.temp = fill_struct_time(glob);
    glob.player = fill_struct_player(&glob);
    glob.startcreen = fill_struct_startscreen(glob);
    glob.gameoverscreen = fill_struct_gameoverscreen(glob);
    glob.font = sfFont_createFromFile(FONT);
    glob.text = sfText_create();
    fill_struct2(glob);
    return glob;
}