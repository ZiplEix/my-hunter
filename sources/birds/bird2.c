/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** bird file
*/
#include "../../include/my.h"

void moove_bird2(global *glob)
{
    sfSprite_move(glob->duck2.sprite, glob->duck2.speed);
    glob->duck2.position = sfSprite_getPosition(glob->duck2.sprite);
    if (glob->duck2.position.x > 1922) {
        glob->duck2.start_pos.y = (rand() % 700) + 50;
        sfSprite_setPosition(glob->duck2.sprite, glob->duck2.start_pos);
        set_speed2(&glob->duck2);
        glob->player.life --;
        if (glob->player.life == 0) {
            glob->player.final_score = glob->player.score;
            glob->player.score = 0;
            glob->player.player_state = 2;
        }
    }
}

void draw_bird2(global *glob)
{
    glob->duck.rect.width = 110;
    sfSprite_setTextureRect(glob->duck2.sprite, glob->duck.rect);
    sfRenderWindow_drawSprite(glob->window, glob->duck2.sprite, sfFalse);
}

void anime_bird2(global *glob)
{
    glob->temp.temp = sfClock_getElapsedTime(glob->temp.clock);
    glob->temp.seconde = glob->temp.temp.microseconds / 1000000.0;

    if (glob->temp.seconde >= 0.13) {
        modified_sheet(&glob->duck.rect, 110, 330);
        sfClock_restart(glob->temp.clock);
    }
    draw_bird2(glob);
}

void bird_destroy2(global *glob)
{
    if (glob->mouse.pos.x >= glob->duck2.position.x
    && glob->mouse.pos.x <= glob->duck2.position.x + 110
    && glob->mouse.pos.y >= glob->duck2.position.y
    && glob->mouse.pos.y <= glob->duck2.position.y + 110) {
        glob->player.score += glob->duck2.speed.x;
        glob->duck2.start_pos.y = (rand() % 700) + 50;
        set_speed2(&glob->duck2);
        sfSprite_setPosition(glob->duck2.sprite, glob->duck2.start_pos);
    }
}

void bird2(global *glob)
{
    anime_bird2(glob);
    moove_bird2(glob);
}
