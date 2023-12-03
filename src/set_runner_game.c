/*
** EPITECH PROJECT, 2021
** set_runner_game
** File description:
** set_runner_game
*/

#include "runner.h"

void draw_text_game(st_principal *game)
{
    game->txt[0] = create_text(FONT_O, (sfVector2f){15, 0}, H, 40);
    sfRenderWindow_drawText(game->w, game->txt[0]->text, NULL);
    sfRenderWindow_drawText(game->w, game->txt[4]->text, NULL);
    sfRenderWindow_drawText(game->w, game->txt[5]->text, NULL);
}

void set_game_all(st_principal *game)
{
    int i = 0;

    for (int i = 1; i != 10; i++)
        sfRenderWindow_drawSprite(game->w, game->plx[i]->sprite, NULL);
    draw_text_game(game);
    sfRenderWindow_drawSprite(game->w, game->sprite[0]->sprite, NULL);
    sfSprite_setTextureRect(game->sprite[0]->sprite, game->sprite[0]->rect);
    for (i = 1; game->obst[i] != NULL; i++) {
        sfRenderWindow_drawSprite(game->w, game->obst[i]->sprite, NULL);
        sfSprite_setTextureRect(game->obst[i]->sprite, game->obst[i]->rect);
    }
    sfRenderWindow_display(game->w);
}
