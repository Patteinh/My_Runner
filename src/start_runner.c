/*
** EPITECH PROJECT, 2021
** runner
** File description:
** runner
*/

#include "runner.h"

void find_choice(st_principal *game)
{
    if (game->status == MENU)
        runner_menu(game);
    else if (game->status == GAME)
        runner_game(game);
    else if (game->status == END)
        runner_end(game);
}

void check_event(st_principal *game)
{
    while (sfRenderWindow_pollEvent(game->w, &(game->event))) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->w);
    }
}

void my_clock(st_principal *game)
{
    game->time = sfClock_getElapsedTime(game->clock);
    game->seconds = game->time.microseconds / 1000000.0;
}

void set_game(st_principal *game)
{
    set_window_clock(game);
    set_music(game);
    set_player_sprite(game);
    set_map(game);
    set_text(game);
    set_parallax(game);
}

int runner(st_principal *game)
{
    game->status = MENU;

    set_game(game);
    music_start(game);
    while (sfRenderWindow_isOpen(game->w)) {
        check_event(game);
        my_clock(game);
        find_choice(game);
        sfMusic_stop(game->music->voice_win);
    }
    destroy_all(game);
    return (0);
}
