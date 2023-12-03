/*
** EPITECH PROJECT, 2022
** destroy
** File description:
** destroy
*/

#include "runner.h"

void destroy_music(st_principal *game)
{
    sfMusic_destroy(game->music->menu);
    sfMusic_destroy(game->music->menuselect_o);
    sfMusic_destroy(game->music->menuselect_t);
    sfMusic_destroy(game->music->ingame);
    sfMusic_destroy(game->music->die);
    sfMusic_destroy(game->music->gameover);
    sfMusic_destroy(game->music->win);
    sfMusic_destroy(game->music->voice_win);
}

void destroy_all(st_principal *game)
{
    destroy_music(game);
    sfRenderWindow_destroy(game->w);
}
