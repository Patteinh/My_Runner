/*
** EPITECH PROJECT, 2021
** runner_game
** File description:
** runner_game
*/

#include "runner.h"

void check_win(st_principal *game)
{
    if (game->sprite[0]->pos.x > game->obst[game->nb_obst]->pos.x + 500) {
        game->check_run = WIN;
        game->status = END;
        music_win(game);
    }
}

void set_runner_game(st_principal *game)
{
    set_game_all(game);
    set_jump(game);
    set_hit(game);
}

void moove_objects(st_principal *game)
{
    moove_parallax(game);
    moove_obst(game);
}

void moove_inf_objects(st_principal *game)
{
    moove_parallax(game);
    moove_inf_obst(game);
}

void runner_game(st_principal *game)
{
    game->score = malloc(sizeof(char) * 5);

    set_runner_game(game);
    if (game->seconds > 0.02) {
        moove_run(game);
        display_score(game);
        sfClock_restart(game->clock);
    }
    if (game->infinity == NO) {
        check_win(game);
        moove_objects(game);
    } else
        moove_inf_objects(game);
}
