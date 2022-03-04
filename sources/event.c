/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** event file
*/
#include "../include/my.h"

void start_game(global *glob)
{
    if (glob->mouse.pos.x >= 890
    && glob->mouse.pos.x <= 1120
    && glob->mouse.pos.y >= 620
    && glob->mouse.pos.y <= 770)
    {
        glob->player.player_state = 1;
    }
}

void close_game(global *glob)
{
    if (glob->mouse.pos.x >= 1800
    && glob->mouse.pos.x <= 1900
    && glob->mouse.pos.y >= 15
    && glob->mouse.pos.y <= 215)
    {
        sfRenderWindow_close(glob->window);
    }
}

void game_event(global *glob)
{
    if (glob->event.type == sfEvtMouseButtonPressed
    && glob->event.mouseButton.button == sfMouseLeft) {
        bird_destroy1(glob);
        bird_destroy2(glob);
        bird_destroy3(glob);
        bird_destroy4(glob);
        bird_destroy5(glob);
    }
}

void game_over_event(global *glob)
{
    if (glob->event.type == sfEvtMouseButtonPressed
    && glob->event.mouseButton.button == sfMouseLeft) {
        if (glob->mouse.pos.x >= 610 && glob->mouse.pos.x <= 1300
        && glob->mouse.pos.y >= 400 && glob->mouse.pos.y <= 600) {
            glob->player.life = 3;
            glob->player.player_state = 0;
            reset_duck(glob);
        }
        if (glob->mouse.pos.x >= 610 && glob->mouse.pos.x <= 1300
        && glob->mouse.pos.y >= 680 && glob->mouse.pos.y <= 880) {
            glob->player.life = 3;
            glob->player.player_state = 1;
            reset_duck(glob);
        }
    }
}

void startscreen_event(global *glob)
{
    if (glob->event.type == sfEvtMouseButtonPressed
    && glob->event.mouseButton.button == sfMouseLeft) {
        start_game(glob);
        close_game(glob);
        settings(glob);
    }
}
