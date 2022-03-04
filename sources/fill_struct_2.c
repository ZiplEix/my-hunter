/*
** EPITECH PROJECT, 2021
** My_hunter
** File description:
** fill struct
*/
#include "../include/my.h"

player fill_struct_player(global *glob)
{
    glob->player.player_state = 0;
    glob->player.life = 3;
    glob->player.score = 0;
    glob->player.final_score = 0;
    glob->player.dificulty = 1;
    glob->player.setting_state = 0;
    return glob->player;
}

startcreen fill_struct_startscreen(global glob)
{
    sfIntRect rectangle = {0, 0, 1920, 1080};

    glob.startcreen.sprite = sfSprite_create();

    glob.startcreen.def_texture = sfTexture_createFromFile(STARTSCREEN,
    &rectangle);
    glob.startcreen.setting_texture = sfTexture_createFromFile(SETTING,
    &rectangle);
    glob.startcreen.easy_texture = sfTexture_createFromFile(SETTINGEASYBUTTON,
    &rectangle);
    glob.startcreen.medium_texture = sfTexture_createFromFile(
        SETTINGMEDUIMBUTTON, &rectangle);
    glob.startcreen.hard_texture = sfTexture_createFromFile(SETTINGHARDBUTTON,
    &rectangle);

    sfSprite_setTexture(glob.startcreen.sprite, glob.startcreen.def_texture,
    sfFalse);

    return glob.startcreen;
}

visor fill_struct_visor(global glob)
{
    glob.visor.sprite = sfSprite_create();
    glob.visor.texture = sfTexture_createFromFile(VISOR, NULL);
    sfSprite_setTexture(glob.visor.sprite, glob.visor.texture, sfFalse);
}
