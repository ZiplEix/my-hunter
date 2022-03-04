/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** fill struct duck
*/
#include "../../include/my.h"

duck1 fill_struct_duck1(global glob)
{
    set_speed1(&glob.duck1);
    glob.duck1.speed.y = 0.0;
    glob.duck1.start_pos.x = -112.0;
    glob.duck1.start_pos.y = glob.duck1.start_pos.y = (rand() % 700) + 50;

    glob.duck1.sprite = sfSprite_create();
    glob.duck1.texture = sfTexture_createFromFile(BIRD, &glob.duck.rect);
    sfSprite_setTexture(glob.duck1.sprite, glob.duck1.texture, sfFalse);

    sfSprite_setPosition(glob.duck1.sprite, glob.duck1.start_pos);

    return glob.duck1;
}

duck2 fill_struct_duck2(global glob)
{
    set_speed2(&glob.duck2);
    glob.duck2.speed.y = 0.0;
    glob.duck2.start_pos.x = -112.0;
    glob.duck2.start_pos.y = glob.duck2.start_pos.y = (rand() % 700) + 50;

    glob.duck2.sprite = sfSprite_create();
    glob.duck2.texture = sfTexture_createFromFile(BIRD, &glob.duck.rect);
    sfSprite_setTexture(glob.duck2.sprite, glob.duck2.texture, sfFalse);

    sfSprite_setPosition(glob.duck2.sprite, glob.duck2.start_pos);

    return glob.duck2;
}

duck3 fill_struct_duck3(global glob)
{
    set_speed3(&glob.duck3);
    glob.duck3.speed.y = 0.0;
    glob.duck3.start_pos.x = -112.0;
    glob.duck3.start_pos.y = glob.duck3.start_pos.y = (rand() % 700) + 50;

    glob.duck3.sprite = sfSprite_create();
    glob.duck3.texture = sfTexture_createFromFile(BIRD, &glob.duck.rect);
    sfSprite_setTexture(glob.duck3.sprite, glob.duck3.texture, sfFalse);

    sfSprite_setPosition(glob.duck3.sprite, glob.duck3.start_pos);

    return glob.duck3;
}

duck4 fill_struct_duck4(global glob)
{
    set_speed4(&glob.duck4);
    glob.duck4.speed.y = 0.0;
    glob.duck4.start_pos.x = -112.0;
    glob.duck4.start_pos.y = glob.duck4.start_pos.y = (rand() % 700) + 50;

    glob.duck4.sprite = sfSprite_create();
    glob.duck4.texture = sfTexture_createFromFile(BIRD, &glob.duck.rect);
    sfSprite_setTexture(glob.duck4.sprite, glob.duck4.texture, sfFalse);

    sfSprite_setPosition(glob.duck4.sprite, glob.duck4.start_pos);

    return glob.duck4;
}

duck5 fill_struct_duck5(global glob)
{
    set_speed5(&glob.duck5);
    glob.duck5.speed.y = 0.0;
    glob.duck5.start_pos.x = -112.0;
    glob.duck5.start_pos.y = glob.duck5.start_pos.y = (rand() % 700) + 50;

    glob.duck5.sprite = sfSprite_create();
    glob.duck5.texture = sfTexture_createFromFile(BIRD, &glob.duck.rect);
    sfSprite_setTexture(glob.duck5.sprite, glob.duck5.texture, sfFalse);

    sfSprite_setPosition(glob.duck5.sprite, glob.duck5.start_pos);

    return glob.duck5;
}
