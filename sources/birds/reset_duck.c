/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** reset duck
*/
#include "../../include/my.h"

void reset_duck(global *glob)
{
    sfSprite_setPosition(glob->duck1.sprite, glob->duck1.start_pos);
    sfSprite_setPosition(glob->duck2.sprite, glob->duck2.start_pos);
    sfSprite_setPosition(glob->duck3.sprite, glob->duck3.start_pos);
    sfSprite_setPosition(glob->duck4.sprite, glob->duck4.start_pos);
    sfSprite_setPosition(glob->duck5.sprite, glob->duck5.start_pos);
}
