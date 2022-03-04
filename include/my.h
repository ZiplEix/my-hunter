/*
** EPITECH PROJECT, 2021
** my h
** File description:
** all my function prototypes
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <math.h>
#include <time.h>

#include "struct.h"
#include "CSFML.h"

#ifndef MY_H
    #define MY_H

global fill_struct();
sfRenderWindow *create_window();
background fill_struct_background(global glob);

duck1 fill_struct_duck1(global glob);
duck1 *set_speed1(duck1 *duck1);
void bird1(global *glob);
void anime_bird1(global *glob);
void draw_bird1(global *glob);
void moove_bird1(global *glob);
void bird_destroy1(global *glob);

duck2 fill_struct_duck2(global global);
duck2 *set_speed2(duck2 *duck2);
void bird2(global *glob);
void anime_bird2(global *glob);
void draw_bird2(global *glob);
void moove_bird2(global *glob);
void bird_destroy2(global *glob);

duck3 fill_struct_duck3(global global);
duck3 *set_speed3(duck3 *duck3);
void bird3(global *glob);
void anime_bird3(global *glob);
void draw_bird3(global *glob);
void moove_bird3(global *glob);
void bird_destroy3(global *glob);

duck4 fill_struct_duck4(global global);
duck4 *set_speed4(duck4 *duck4);
void bird4(global *glob);
void anime_bird4(global *glob);
void draw_bird4(global *glob);
void moove_bird4(global *glob);
void bird_destroy4(global *glob);

duck5 fill_struct_duck5(global global);
duck5 *set_speed5(duck5 *duck5);
void bird5(global *glob);
void anime_bird5(global *glob);
void draw_bird5(global *glob);
void moove_bird5(global *glob);
void bird_destroy5(global *glob);

void modified_sheet(sfIntRect *rect, int offset, int max);
void analyse_event(global *glob);
void destroy_all(global glob);
int my_getnbr(char const *str);
char *my_itoa(int nbr);
void score(global *glob);
void game_loop(global *glob);
void game_event(global *glob);
void game_over_event(global *glob);
void close_game(global *glob);
void start_game(global *glob);
void startscreen_event(global *glob);
void setting_menu_event(global *glob);
void setting_button_animation(global *glob);
void settings(global *glob);int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
player fill_struct_player(global *glob);
startcreen fill_struct_startscreen(global glob);
void reset_duck(global *glob);
visor fill_struct_visor(global glob);
int rules();

#endif /* !MY_H */
