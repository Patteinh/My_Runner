/*
** EPITECH PROJECT, 2022
** jump_collision
** File description:
** jump_collision
*/

#include "runner.h"

void condition_hit(st_principal *game, st_hit *h)
{
    if (((h->x + 75 >= h->obst_x && h->x <= h->obst_x) && (h->y + 120 >=
    h->obst_y && h->y < h->obst_y + 100) && game->obst[h->i]->kill == 1)) {
            music_gameover(game);
            game->check_run = LOSE;
            game->status = END;
        }
}

void set_st_hit(st_principal *game, st_hit *h)
{
    h->i = 1;
    h->x = game->sprite[0]->pos.x;
    h->y = game->sprite[0]->pos.y;
}

void set_hit(st_principal *game)
{
    st_hit h;
    set_st_hit(game, &h);

    for (h.i = 1; game->obst[h.i] != NULL; h.i++) {
        h.obst_x = game->obst[h.i]->pos.x;
        h.obst_y = game->obst[h.i]->pos.y;
        condition_hit(game, &h);
    }
}

void jump(st_principal *game)
{
    static int key = 0;

    if (key == 0) {
        game->sprite[0]->pos.y = game->sprite[0]->pos.y - 14;
        if (game->sprite[0]->pos.y <= 580)
            key = 1;
        game->jump = 1;
    } else if (key == 1) {
        game->sprite[0]->pos.y += 14;
        if (game->sprite[0]->pos.y >= 822) {
            key = 0;
            game->jump = 0;
        }
    }
    sfSprite_setPosition(game->sprite[0]->sprite, game->sprite[0]->pos);
}

void set_jump(st_principal *game)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) || game->jump == 1)
            jump(game);
}
