/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** setting menu
*/
#include "../../include/my.h"

void settings(global *glob)
{
    if (glob->mouse.pos.x > 18 && glob->mouse.pos.y > 18
    && glob->mouse.pos.x < 274 && glob->mouse.pos.y < 274) {
        glob->player.setting_state = 1;
    }
    if (glob->player.setting_state == 1 && glob->player.player_state == 0)
    {
        sfSprite_setTexture(glob->startcreen.sprite,
        glob->startcreen.setting_texture, sfFalse);
    }
}

void setting_button_animation(global *glob)
{
    if (glob->mouse.pos.x >= 620 && glob->mouse.pos.x <= 1300
    && glob->mouse.pos.y >= 320 && glob->mouse.pos.y <= 490) {
        sfSprite_setTexture(glob->startcreen.sprite,
        glob->startcreen.easy_texture , sfFalse);
    }
    else if (glob->mouse.pos.x >= 620 && glob->mouse.pos.x <= 1300
    && glob->mouse.pos.y >= 525 && glob->mouse.pos.y <= 700) {
        sfSprite_setTexture(glob->startcreen.sprite,
        glob->startcreen.medium_texture , sfFalse);
    }
    else if (glob->mouse.pos.x >= 620 && glob->mouse.pos.x <= 1300
    && glob->mouse.pos.y >= 745 && glob->mouse.pos.y <= 820) {
        sfSprite_setTexture(glob->startcreen.sprite,
        glob->startcreen.hard_texture , sfFalse);
    }else {
        sfSprite_setTexture(glob->startcreen.sprite,
        glob->startcreen.setting_texture, sfFalse);
    }
    sfRenderWindow_drawSprite(glob->window, glob->startcreen.sprite, sfFalse);
}

void god_mod(global *glob)
{
    if (glob->mouse.pos.x < 128 && glob->mouse.pos.y < 128)
        glob->player.life = 100;
}

void setting_menu_event(global *glob)
{
    if (glob->event.type == sfEvtMouseButtonPressed
    && glob->event.mouseButton.button == sfMouseLeft) {
        if (glob->mouse.pos.x > 1610 && glob->mouse.pos.y > 170
        && glob->mouse.pos.x < 1655 && glob->mouse.pos.y < 225)
            glob->player.setting_state = 0;
        if (glob->mouse.pos.x >= 620 && glob->mouse.pos.x <= 1300
        && glob->mouse.pos.y >= 320 && glob->mouse.pos.y <= 490) {
            glob->player.dificulty = 1;
        }
        if (glob->mouse.pos.x >= 620 && glob->mouse.pos.x <= 1300
        && glob->mouse.pos.y >= 525 && glob->mouse.pos.y <= 700) {
            glob->player.dificulty = 2;
        }
        if (glob->mouse.pos.x >= 620 && glob->mouse.pos.x <= 1300
        && glob->mouse.pos.y >= 745 && glob->mouse.pos.y <= 820) {
            glob->player.dificulty = 3;
        }
        god_mod(glob);
    }
    setting_button_animation(glob);
}
