/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** bird file
*/
#include "../../include/my.h"

void moove_bird3(global *glob)
{
    sfSprite_move(glob->duck3.sprite, glob->duck3.speed);
    glob->duck3.position = sfSprite_getPosition(glob->duck3.sprite);
    if (glob->duck3.position.x > 1922) {
        glob->duck3.start_pos.y = (rand() % 700) + 50;
        sfSprite_setPosition(glob->duck3.sprite, glob->duck3.start_pos);
        set_speed3(&glob->duck3);
        glob->player.life --;
        if (glob->player.life == 0) {
            glob->player.final_score = glob->player.score;
            glob->player.score = 0;
            glob->player.player_state = 2;
        }
    }
}

void draw_bird3(global *glob)
{
    glob->duck.rect.width = 110;
    sfSprite_setTextureRect(glob->duck3.sprite, glob->duck.rect);
    sfRenderWindow_drawSprite(glob->window, glob->duck3.sprite, sfFalse);
}

void anime_bird3(global *glob)
{
    glob->temp.temp = sfClock_getElapsedTime(glob->temp.clock);
    glob->temp.seconde = glob->temp.temp.microseconds / 1000000.0;

    if (glob->temp.seconde >= 0.13) {
        modified_sheet(&glob->duck.rect, 110, 330);
        sfClock_restart(glob->temp.clock);
    }
    draw_bird3(glob);
}

void bird_destroy3(global *glob)
{
    if (glob->mouse.pos.x >= glob->duck3.position.x
    && glob->mouse.pos.x <= glob->duck3.position.x + 110
    && glob->mouse.pos.y >= glob->duck3.position.y
    && glob->mouse.pos.y <= glob->duck3.position.y + 110) {
        glob->player.score += glob->duck3.speed.x;
        glob->duck3.start_pos.y = (rand() % 700) + 50;
        set_speed3(&glob->duck3);
        sfSprite_setPosition(glob->duck3.sprite, glob->duck3.start_pos);
    }
}

void bird3(global *glob)
{
    anime_bird3(glob);
    moove_bird3(glob);
}
