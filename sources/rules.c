/*
** EPITECH PROJECT, 2021
** My_Hunter
** File description:
** rules
*/
#include "../include/my.h"

void description()
{
    my_putstr("Description :\n");
    my_putstr("\tThis game is the first graphical project ");
    my_putstr("of the first year of EPITECH\n\n");
}

void date()
{
    my_putstr("Date :\n");
    my_putstr("\tStart : \t22/11/21\n");
    my_putstr("\tSelease : \t05/12/21\n\n");
}

void game_rules()
{
    my_putstr("Rules :\n");
    my_putstr("\tChoose the difficulty of the game by clicking on the ");
    my_putstr("gear\n\tClick on the ducks and try to increase your score\n");
    my_putstr("\tYou have only 3 life by round (but be careful the ");
    my_putstr("remaining life are not display on the screen)\n");
    my_putstr("\tA god mod is available by clicking on a ");
    my_putstr("spesific place in the setting menu\n");
    my_putstr("\tGod mod can only be removed by closing and ");
    my_putstr("restart the game\n\n");
    my_putstr("\tLunch the game by writing this commande :\n\t\t");
    my_putstr("./my_hunter\n");
}

void equal()
{
    my_putstr("========================================================");
    my_putstr("====================================================\n");
}

int rules()
{
    equal();
    my_putstr("Welcome in the Duck Hunt of Baptiste Leroyer\n\n");
    description();
    date();
    game_rules();
    my_putstr("ENJOY\n");
    equal();
    return 0;
}