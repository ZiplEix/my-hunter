/*
** EPITECH PROJECT, 2021
** My_hunter
** File description:
** struct
*/
#include "CSFML.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

//background
    typedef struct
    {
        sfSprite *sprite;
        sfTexture *texture;
    } background;
//duck
    typedef struct
    {
        sfIntRect rect;
    } duck;
//duck 1
    typedef struct
    {
        sfVector2f speed;
        sfVector2f position;
        sfVector2f start_pos;
        sfSprite *sprite;
        sfTexture *texture;
    } duck1;
//duck 2
    typedef struct
    {
        sfVector2f speed;
        sfVector2f position;
        sfVector2f start_pos;
        sfSprite *sprite;
        sfTexture *texture;
    } duck2;
//duck 3
    typedef struct
    {
        sfVector2f speed;
        sfVector2f position;
        sfVector2f start_pos;
        sfSprite *sprite;
        sfTexture *texture;
    } duck3;
//duck 4
    typedef struct
    {
        sfVector2f speed;
        sfVector2f position;
        sfVector2f start_pos;
        sfSprite *sprite;
        sfTexture *texture;
    } duck4;
//duck 5
    typedef struct
    {
        sfVector2f speed;
        sfVector2f position;
        sfVector2f start_pos;
        sfSprite *sprite;
        sfTexture *texture;
    } duck5;
//temp
    typedef struct
    {
        sfClock *clock;
        sfTime temp;
        float seconde;
    } temp;
//souris
    typedef struct
    {
        sfVector2i pos;
        sfVector2f posf;
    } mouse;
//player
    typedef struct
    {
        int player_state;
        int setting_state;
        int life;
        int score;
        int final_score;
        int dificulty;
    } player;
//startscreen
    typedef struct
    {
        sfSprite *sprite;

        sfTexture *def_texture;
        sfTexture *setting_texture;
        sfTexture *easy_texture;
        sfTexture *medium_texture;
        sfTexture *hard_texture;
    } startcreen;
//game_over_screen
    typedef struct
    {
        sfSprite *sprite;

        sfTexture *def_texture;
        sfTexture *menu_texture;
        sfTexture *restart_texture;

        sfIntRect rect;
    } gameoverscreen;
//cross_hair
    typedef struct
    {
        sfSprite *sprite;
        sfTexture *texture;
    } visor;
//global
    typedef struct
    {
        sfRenderWindow *window;
        background background;
        sfEvent event;
        sfFont *font;
        duck1 duck1;
        duck2 duck2;
        duck3 duck3;
        duck4 duck4;
        duck5 duck5;
        visor visor;
        duck duck;
        temp temp;
        mouse mouse;
        sfText *text;
        player player;
        startcreen startcreen;
        gameoverscreen gameoverscreen;
    } global;

#endif /* !STRUCT_H_ */
