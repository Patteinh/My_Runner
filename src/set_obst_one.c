/*
** EPITECH PROJECT, 2022
** set_obst
** File description:
** set_obst
*/

#include "runner.h"

void set_pike_a_z(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PIKE0,
    (sfVector2f){x * 96, y * 124}, (sfIntRect){0, 0, 300, 116});
    game->obst[obst]->kill = 0;
}

void set_pike_a_o(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PIKE1,
    (sfVector2f){x * 96, y * 124}, (sfIntRect){0, 0, 300, 116});
    game->obst[obst]->kill = 1;
}

void set_pike_a_t(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PIKE2,
    (sfVector2f){x * 96, y * 124}, (sfIntRect){0, 0, 300, 116});
    game->obst[obst]->kill = 1;
}

void set_pike_a_u(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PIKE2,
    (sfVector2f){x * 96, y * 124}, (sfIntRect){0, 0, 90, 116});
    game->obst[obst]->kill = 1;
}

void set_pum_z(st_principal *game, int obst, int y, int x)
{
    game->obst[obst] = create_obst(game, PUM0,
    (sfVector2f){x * 96, y * 122}, (sfIntRect){0, 0, 120, 130});
    game->obst[obst]->kill = 1;
}
