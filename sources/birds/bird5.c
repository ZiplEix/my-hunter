/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** bird file
*/
#include "../../include/my.h"

void moove_bird5(global *glob)
{
    sfSprite_move(glob->duck5.sprite, glob->duck5.speed);
    glob->duck5.position = sfSprite_getPosition(glob->duck5.sprite);
    if (glob->duck5.position.x > 1922) {
        glob->duck5.start_pos.y = (rand() % 700) + 50;
        sfSprite_setPosition(glob->duck5.sprite, glob->duck5.start_pos);
        set_speed5(&glob->duck5);
        glob->player.life --;
        if (glob->player.life == 0) {
            glob->player.final_score = glob->player.score;
            glob->player.score = 0;
            glob->player.player_state = 2;
        }
    }
}

void draw_bird5(global *glob)
{
    glob->duck.rect.width = 110;
    sfSprite_setTextureRect(glob->duck5.sprite, glob->duck.rect);
    sfRenderWindow_drawSprite(glob->window, glob->duck5.sprite, sfFalse);
}

void anime_bird5(global *glob)
{
    glob->temp.temp = sfClock_getElapsedTime(glob->temp.clock);
    glob->temp.seconde = glob->temp.temp.microseconds / 1000000.0;

    if (glob->temp.seconde >= 0.13) {
        modified_sheet(&glob->duck.rect, 110, 330);
        sfClock_restart(glob->temp.clock);
    }
    draw_bird5(glob);
}

void bird_destroy5(global *glob)
{
    if (glob->mouse.pos.x >= glob->duck5.position.x
    && glob->mouse.pos.x <= glob->duck5.position.x + 110
    && glob->mouse.pos.y >= glob->duck5.position.y
    && glob->mouse.pos.y <= glob->duck5.position.y + 110) {
        glob->player.score += glob->duck5.speed.x;
        glob->duck5.start_pos.y = (rand() % 700) + 50;
        set_speed5(&glob->duck5);
        sfSprite_setPosition(glob->duck5.sprite, glob->duck5.start_pos);
    }
}

void bird5(global *glob)
{
    anime_bird5(glob);
    moove_bird5(glob);
}
