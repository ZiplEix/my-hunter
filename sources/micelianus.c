/*
** EPITECH PROJECT, 2021
** My_hunter
** File description:
** micelianus fonctions
*/
#include "../include/my.h"

duck1 *set_speed1(duck1 *duck1)
{
    duck1->speed.x = (rand() % 15) + 5;
    return duck1;
}

duck2 *set_speed2(duck2 *duck2)
{
    duck2->speed.x = (rand() % 15) + 5;
    return duck2;
}

duck3 *set_speed3(duck3 *duck3)
{
    duck3->speed.x = (rand() % 15) + 5;
    return duck3;
}

duck4 *set_speed4(duck4 *duck4)
{
    duck4->speed.x = (rand() % 15) + 5;
    return duck4;
}

duck5 *set_speed5(duck5 *duck5)
{
    duck5->speed.x = (rand() % 15) + 5;
    return duck5;
}
