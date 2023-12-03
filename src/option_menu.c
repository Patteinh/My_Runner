/*
** EPITECH PROJECT, 2022
** option
** File description:
** option
*/

#include "runner.h"

void select_option_menu(st_principal *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        game->select--;
        top_music(game);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        game->select++;
        bottom_music(game);
    }
    top_down_moove_menu(game);
}

void top_down_moove_menu(st_principal *game)
{
    if (game->select > EXIT) {
        game->select = PLAY;
        sfMusic_play(game->music->menuselect_o);
    }
    if (game->select < PLAY) {
        game->select = EXIT;
        sfMusic_play(game->music->menuselect_t);
    }
}

void choose_option_menu(st_principal *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn) && game->select == PLAY) {
        game->infinity = NO;
        music_game(game);
        game->status = GAME;
    } else if (sfKeyboard_isKeyPressed(sfKeyReturn) && game->select == INF) {
        game->infinity = YES;
        music_game(game);
        game->status = GAME;
    } else if (sfKeyboard_isKeyPressed(sfKeyReturn) && game->select == EXIT)
        sfRenderWindow_close(game->w);
}

void color_option_menu(st_principal *game)
{
    int i = 1;

    for (i = 1; i != 4; i++) {
        sfText_setColor(game->txt[i]->text, sfWhite);
        sfText_setCharacterSize(game->txt[i]->text, 50);
    }
    sfText_setColor(game->txt[game->select]->text, sfRed);
    sfText_setCharacterSize(game->txt[game->select]->text, 60);
}
