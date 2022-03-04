/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** bird file
*/
#include "../../include/my.h"

void moove_bird4(global *glob)
{
    sfSprite_move(glob->duck4.sprite, glob->duck4.speed);
    glob->duck4.position = sfSprite_getPosition(glob->duck4.sprite);
    if (glob->duck4.position.x > 1922) {
        glob->duck4.start_pos.y = (rand() % 700) + 50;
        sfSprite_setPosition(glob->duck4.sprite, glob->duck4.start_pos);
        set_speed4(&glob->duck4);
        glob->player.life --;
        if (glob->player.life == 0) {
            glob->player.final_score = glob->player.score;
            glob->player.score = 0;
            glob->player.player_state = 2;
        }
    }
}

void draw_bird4(global *glob)
{
    glob->duck.rect.width = 110;
    sfSprite_setTextureRect(glob->duck4.sprite, glob->duck.rect);
    sfRenderWindow_drawSprite(glob->window, glob->duck4.sprite, sfFalse);
}

void anime_bird4(global *glob)
{
    glob->temp.temp = sfClock_getElapsedTime(glob->temp.clock);
    glob->temp.seconde = glob->temp.temp.microseconds / 1000000.0;

    if (glob->temp.seconde >= 0.13) {
        modified_sheet(&glob->duck.rect, 110, 330);
        sfClock_restart(glob->temp.clock);
    }
    draw_bird4(glob);
}

void bird_destroy4(global *glob)
{
    if (glob->mouse.pos.x >= glob->duck4.position.x
    && glob->mouse.pos.x <= glob->duck4.position.x + 110
    && glob->mouse.pos.y >= glob->duck4.position.y
    && glob->mouse.pos.y <= glob->duck4.position.y + 110) {
        glob->player.score += glob->duck4.speed.x;
        glob->duck4.start_pos.y = (rand() % 700) + 50;
        set_speed4(&glob->duck4);
        sfSprite_setPosition(glob->duck4.sprite, glob->duck4.start_pos);
    }
}

void bird4(global *glob)
{
    anime_bird4(glob);
    moove_bird4(glob);
}
