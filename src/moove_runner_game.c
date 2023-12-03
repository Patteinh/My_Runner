/*
** EPITECH PROJECT, 2022
** moove_runner_game
** File description:
** moove_runner_game
*/

#include "runner.h"

void moove_parallax(st_principal *game)
{
    int i = 1;
    sfVector2f pos_tmp = {0, 0};

    for (i = 1; i != 10; i++) {
        if (game->plx[i]->pos.x == -1920)
            game->plx[i]->pos.x = 0;
        sfSprite_setPosition(game->plx[i]->sprite, pos_tmp);
        sfRenderWindow_drawSprite(game->w, game->plx[i]->sprite, NULL);
    }
    game->plx[2]->pos.x -= 0.5;
    game->plx[3]->pos.x -= 2;
    game->plx[4]->pos.x -= 3;
    game->plx[5]->pos.x -= 4;
    game->plx[6]->pos.x -= 6;
    game->plx[7]->pos.x -= 8;
    game->plx[8]->pos.x -= 4;
    game->plx[9]->pos.x -= 5;
    for (int i = 2; i != 10; i++)
        sfSprite_setPosition(game->plx[i]->sprite, game->plx[i]->pos);
}

void moove_inf_obst(st_principal *game)
{
    int i = 1;

    game->reset_map += 14;
    for (i = 1; game->obst[i] != NULL; i++) {
        if (game->obst[i]->pos.x <= -4000) {
            game->obst[i]->pos.x = game->obst[i]->pos.x + 8000;
        }
        game->obst[i]->pos.x = game->obst[i]->pos.x - 14;
        sfSprite_setPosition(game->obst[i]->sprite, game->obst[i]->pos);
    }
}

void moove_obst(st_principal *game)
{
    int i = 1;

    game->reset_map += 14;
    for (i = 1; game->obst[i] != NULL; i++) {
        game->obst[i]->pos.x = game->obst[i]->pos.x - 14;
        sfSprite_setPosition(game->obst[i]->sprite, game->obst[i]->pos);
    }
}

void set_score(st_principal *game, long nbr)
{
    long stock = nbr;
    long i = 0;

    while (stock > 0) {
        stock = stock / 10;
        i++;
    }
    game->score[i] = '\0';
    while (i--) {
        game->score[i] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
}

void display_score(st_principal *game)
{
    game->number_score = game->number_score + 1;
    set_score(game, game->number_score);
    game->txt[4] = create_text("res/bold.ttf",
    (sfVector2f){1770, 0}, game->score, 60);
}
