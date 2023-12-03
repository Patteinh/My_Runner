/*
** EPITECH PROJECT, 2022
** music_select
** File description:
** music_select
*/

#include "runner.h"

void top_music(st_principal *game)
{
    sfMusic_play(game->music->menuselect_o);
    sfMusic_stop(game->music->menuselect_t);
}

void bottom_music(st_principal *game)
{
    sfMusic_play(game->music->menuselect_t);
    sfMusic_stop(game->music->menuselect_o);
}
