/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** game loop
*/
#include "../include/my.h"

void game_loop(global *glob)
{
    sfRenderWindow_drawSprite(glob->window, glob->background.sprite, sfFalse);
    score(glob);
    if (glob->player.dificulty == 1) {
        bird1(glob);
    }
    if (glob->player.dificulty == 2) {
        bird1(glob);
        bird2(glob);
        bird3(glob);
    }
    if (glob->player.dificulty == 3) {
        bird1(glob);
        bird2(glob);
        bird3(glob);
        bird4(glob);
        bird5(glob);
    }
}
