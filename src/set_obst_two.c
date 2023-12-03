/*
** EPITECH PROJECT, 2022
** set_obst_two
** File description:
** set_obst_two
*/

#include "runner.h"

void set_pum_l(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PUM0L,
    (sfVector2f){x * 96, y * 122}, (sfIntRect){0, 0, 120, 130});
    game->obst[obst]->kill = 1;
}

void set_pum_o(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PUM1,
    (sfVector2f){x * 96, y * 122}, (sfIntRect){0, 0, 120, 130});
    game->obst[obst]->kill = 1;
}

void set_pum_om(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PUM1L,
    (sfVector2f){x * 96, y * 122}, (sfIntRect){0, 0, 120, 130});
    game->obst[obst]->kill = 1;
}

void set_ghost(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, GHOST,
    (sfVector2f){x * 96, y * 122}, (sfIntRect){0, 0, 200, 200});
    game->obst[obst]->kill = 1;
}
