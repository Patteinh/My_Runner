/*
** EPITECH PROJECT, 2022
** set_runner_end
** File description:
** set_runner_end
*/

#include "runner.h"

void first_set_end(st_principal *game)
{
    sfRenderWindow_clear(game->w, sfBlack);
    set_menu_parallax(game);
    sfRenderWindow_drawText(game->w, game->txt[4]->text, NULL);
    sfRenderWindow_drawText(game->w, game->txt[6]->text, NULL);
    sfRenderWindow_drawText(game->w, game->txt[8]->text, NULL);
    sfRenderWindow_drawText(game->w, game->txt[9]->text, NULL);
    sfRenderWindow_drawText(game->w, game->txt[10]->text, NULL);
}

void set_one_end(st_principal *game)
{
    sfRenderWindow_drawText(game->w, game->txt[7]->text, NULL);
    sfRenderWindow_drawSprite(game->w, game->sprite[2]->sprite, NULL);
    sfSprite_setTextureRect(game->sprite[2]->sprite, game->sprite[2]->rect);
}

void set_two_end(st_principal *game)
{
    sfRenderWindow_drawText(game->w, game->txt[11]->text, NULL);
    sfRenderWindow_drawSprite(game->w, game->sprite[3]->sprite, NULL);
    sfSprite_setTextureRect(game->sprite[3]->sprite, game->sprite[3]->rect);
}

void set_runner_end(st_principal *game)
{
    first_set_end(game);
    if (game->check_run == 2)
        set_one_end(game);
    else if (game->check_run == 1)
        set_two_end(game);
    sfRenderWindow_display(game->w);
}
