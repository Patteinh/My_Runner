/*
** EPITECH PROJECT, 2022
** option_end
** File description:
** option_end
*/

#include "runner.h"

void select_option_end(st_principal *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        game->select --;
        top_music(game);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        game->select ++;
        bottom_music(game);
    }
    top_down_moove_end(game);
}

void top_down_moove_end(st_principal *game)
{
    if (game->select > EXIT2) {
        game->select = RESTART;
        sfMusic_play(game->music->menuselect_o);
    }
    if (game->select < RESTART) {
        game->select = EXIT2;
        sfMusic_play(game->music->menuselect_t);
    }
}

void reset_game(st_principal *game)
{
    int i = 0;
    game->check_run = 0;
    game->number_score = 0;

    if (game->select == MENU2)
        game->status = MENU;
    if (game->select == RESTART)
        game->status = GAME;
    for (i = 1; game->obst[i] != NULL; i++) {
        if (game->infinity == NO) {
            game->obst[i]->pos.x = game->obst[i]->pos.x + game->reset_map;
        } else
            game->obst[i]->pos.x = game->obst[i]->pos.x + game->reset_map + R;
        sfSprite_setPosition(game->obst[i]->sprite, game->obst[i]->pos);
    }
    game->reset_map = 0;
}

void choose_option_end(st_principal *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn) && game->select == RESTART) {
        reset_music(game);
        reset_game(game);
    } else if (sfKeyboard_isKeyPressed(sfKeyReturn) && game->select == MENU2) {
        sfMusic_stop(game->music->die);
        sfMusic_stop(game->music->gameover);
        reset_game(game);
    } else if (sfKeyboard_isKeyPressed(sfKeyReturn) && game->select == EXIT2)
        sfRenderWindow_close(game->w);
}

void color_option_end(st_principal *game)
{
    for (int i = 8; i != 11; i++) {
        sfText_setColor(game->txt[i]->text, sfWhite);
        sfText_setCharacterSize(game->txt[i]->text, 50);
    }
    sfText_setColor(game->txt[game->select + 7]->text, sfRed);
    sfText_setCharacterSize(game->txt[game->select + 7]->text, 60);
}
