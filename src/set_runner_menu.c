/*
** EPITECH PROJECT, 2022
** set_runner_menu
** File description:
** set_runner_menu
*/

#include "runner.h"

void set_menu_pos(st_principal *game)
{
    game->plx[2]->pos.x += 0.3;
    game->plx[3]->pos.x += 0.4;
    game->plx[8]->pos.x += 0.3;
    sfSprite_setPosition(game->plx[2]->sprite, game->plx[2]->pos);
    sfSprite_setPosition(game->plx[3]->sprite, game->plx[3]->pos);
    sfSprite_setPosition(game->plx[8]->sprite, game->plx[8]->pos);
}

void check_menu_parallax(st_principal *game)
{
    if (game->plx[2]->pos.x == -1900)
        game->plx[2]->pos.x = 2500;
    if (game->plx[3]->pos.x == 1300)
        game->plx[3]->pos.x = -1000;
    if (game->plx[8]->pos.x == 1700)
        game->plx[8]->pos.x = -1900;
}

void set_menu_parallax(st_principal *game)
{
    int i = 1;

    for (i = 1; i < 10; i++) {
        check_menu_parallax(game);
        sfRenderWindow_drawSprite(game->w, game->plx[i]->sprite, NULL);
    }
    set_menu_pos(game);
}

void set_runner_menu(st_principal *game)
{
    set_menu_parallax(game);
    for (int i = 0; i != 4; i++)
        sfRenderWindow_drawText(game->w, game->txt[i]->text, NULL);
    sfRenderWindow_drawSprite(game->w, game->sprite[1]->sprite, NULL);
    sfSprite_setTextureRect(game->sprite[1]->sprite, game->sprite[1]->rect);
    sfRenderWindow_display(game->w);
}
