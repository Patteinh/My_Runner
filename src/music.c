/*
** EPITECH PROJECT, 2022
** music
** File description:
** music
*/

#include "runner.h"

void music_start(st_principal *game)
{
    sfMusic_play(game->music->menu);
    sfMusic_setLoop(game->music->menu, sfTrue);
}

void music_game(st_principal *game)
{
    sfMusic_stop(game->music->menu);
    sfMusic_play(game->music->ingame);
    sfMusic_setLoop(game->music->ingame, sfTrue);
}

void music_gameover(st_principal *game)
{
    sfMusic_play(game->music->die);
    sfMusic_play(game->music->gameover);
    sfMusic_stop(game->music->ingame);
    sfMusic_play(game->music->menu);
}

void music_win(st_principal *game)
{
    sfMusic_play(game->music->voice_win);
    sfMusic_play(game->music->win);
    sfMusic_stop(game->music->ingame);
    sfMusic_play(game->music->menu);
}

void reset_music(st_principal *game)
{
    sfMusic_stop(game->music->menu);
    sfMusic_stop(game->music->die);
    sfMusic_stop(game->music->gameover);
    sfMusic_play(game->music->ingame);
    sfMusic_setLoop(game->music->ingame, sfTrue);
}
