/*
** EPITECH PROJECT, 2022
** moove_player
** File description:
** moove_player
*/

#include "runner.h"

void chill_moove(st_principal *game)
{
    int max = 2000;

    if (game->sprite[1]->rect.top >= max - game->sprite[1]->rect.width)
        game->sprite[1]->rect.top = 0;
    else {
        game->sprite[1]->rect.top = game->sprite[1]->rect.top +
            game->sprite[1]->rect.width;
    }
}

void moove_run(st_principal *game)
{
    int max_value_p = 3000;

    if (game->sprite[0]->rect.top >= max_value_p - game->sprite[0]->rect.width)
        game->sprite[0]->rect.top = 0;
    else {
        game->sprite[0]->rect.top = game->sprite[0]->rect.top +
            game->sprite[0]->rect.width;
    }
}

void moove_die(st_principal *game)
{
    int max_value_p = 3000;

    if (game->sprite[2]->rect.top >= max_value_p - game->sprite[2]->rect.width)
        game->sprite[2]->rect.top = 4501;
    else {
        game->sprite[2]->rect.top = game->sprite[2]->rect.top +
            game->sprite[2]->rect.width;
    }
}

void moove_dance(st_principal *game)
{
    int max_value_p = 4000;

    if (game->sprite[3]->rect.top >= max_value_p - game->sprite[3]->rect.width)
        game->sprite[3]->rect.top = 0;
    else {
        game->sprite[3]->rect.top = game->sprite[3]->rect.top +
            game->sprite[3]->rect.width;
    }
}
