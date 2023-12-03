/*
** EPITECH PROJECT, 2022
** end_game
** File description:
** end_game
*/

#include "runner.h"

void choice_moove(st_principal *game)
{
    if (game->check_run == WIN)
        moove_dance(game);
    else if (game->check_run == LOSE)
        moove_die(game);
}

void option_end(st_principal *game)
{
    select_option_end(game);
    color_option_end(game);
    choose_option_end(game);
}

void runner_end(st_principal *game)
{
    set_runner_end(game);
    choice_moove(game);
    if (game->seconds > 0.1) {
        option_end(game);
        sfClock_restart(game->clock);
    }
}
