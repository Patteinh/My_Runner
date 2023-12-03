/*
** EPITECH PROJECT, 2021
** runner_menu
** File description:
** runner_menu
*/

#include "runner.h"

void option_menu(st_principal *game)
{
    select_option_menu(game);
    color_option_menu(game);
    choose_option_menu(game);
}

void runner_menu(st_principal *game)
{
    set_runner_menu(game);
    if (game->seconds > 0.1) {
        chill_moove(game);
        option_menu(game);
        sfClock_restart(game->clock);
    }
}
