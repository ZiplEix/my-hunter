/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** main file
*/
#include "../include/my.h"

void game_over(global *glob)
{
    if (glob->mouse.pos.x >= 610 && glob->mouse.pos.x <= 1300
    && glob->mouse.pos.y >= 400 && glob->mouse.pos.y <= 600) {
        sfSprite_setTexture(glob->gameoverscreen.sprite,
        glob->gameoverscreen.menu_texture, sfFalse);
    }
    else if (glob->mouse.pos.x >= 610 && glob->mouse.pos.x <= 1300
    && glob->mouse.pos.y >= 680 && glob->mouse.pos.y <= 880) {
        sfSprite_setTexture(glob->gameoverscreen.sprite,
        glob->gameoverscreen.restart_texture, sfFalse);
    } else {
        sfSprite_setTexture(glob->gameoverscreen.sprite,
        glob->gameoverscreen.def_texture, sfFalse);
    }
    sfRenderWindow_drawSprite(glob->window,
    glob->gameoverscreen.sprite, sfFalse);
}

void analyse_event(global *glob)
{
    while (sfRenderWindow_pollEvent(glob->window, &glob->event)) {
        if (glob->event.type == sfEvtClosed)
            sfRenderWindow_close(glob->window);
        if (glob->player.player_state == 1)
            game_event(glob);
        if (glob->player.player_state == 0 && glob->player.setting_state == 0) {
            sfSprite_setTexture(glob->startcreen.sprite,
            glob->startcreen.def_texture, sfFalse);
            startscreen_event(glob);
        }
        if (glob->player.player_state == 2)
            game_over_event(glob);
        if (glob->player.player_state == 0 && glob->player.setting_state == 1) {
            setting_menu_event(glob);
        }
    }
}

void cross_hair(global *glob)
{

    if (glob->player.player_state == 0) {
        sfRenderWindow_setMouseCursorVisible(glob->window, sfTrue);
    }
    if (glob->player.player_state == 1) {
        sfRenderWindow_setMouseCursorVisible(glob->window, sfTrue);
    }
    if (glob->player.player_state == 2) {
        sfRenderWindow_setMouseCursorVisible(glob->window, sfTrue);
    }
}

void game(global *glob)
{
    if (glob->player.player_state == 0) {
        cross_hair(glob);
        sfRenderWindow_drawSprite(glob->window,
        glob->startcreen.sprite, sfFalse);
    }
    if (glob->player.player_state == 1) {
        cross_hair(glob);
        game_loop(glob);
    }
    if (glob->player.player_state == 2) {
        cross_hair(glob);
        game_over(glob);
    }
}

int main(int argc, char const *argv[])
{
    if (argc > 1 && argc < 3 && my_strlen(argv[1]) == 2
    && argv[1][0] == '-' && argv[1][1] == 'h')
        return (rules());
    global glob = fill_struct();
    sfRenderWindow_setFramerateLimit(glob.window, 60);
    srand(time(NULL));
    sfVector2f posf;

    while (sfRenderWindow_isOpen(glob.window)) {
        glob.mouse.pos = sfMouse_getPosition((sfWindow *)glob.window);
        analyse_event(&glob);
        sfRenderWindow_clear(glob.window, sfTransparent);
        game(&glob);
        sfRenderWindow_display(glob.window);
    }
    destroy_all(glob);
    return 0;
}
