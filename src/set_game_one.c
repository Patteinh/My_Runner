/*
** EPITECH PROJECT, 2021
** set_game
** File description:
** set_game
*/

#include "runner.h"

void set_window_clock(st_principal *game)
{
    sfVideoMode mode = {1920, 1080, 32};
    game->w =
        sfRenderWindow_create(mode, "My_runner", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->w, 60);
    game->clock = sfClock_create();
}

void set_music(st_principal *game)
{
    game->music = malloc(sizeof(st_music));

    game->music->menu = sfMusic_createFromFile(M_MENU);
    game->music->menuselect_o = sfMusic_createFromFile(M_SELECT_O);
    game->music->menuselect_t = sfMusic_createFromFile(M_SELECT_T);
    game->music->ingame = sfMusic_createFromFile(M_INGAME);
    game->music->die = sfMusic_createFromFile(M_DIE);
    game->music->gameover = sfMusic_createFromFile(M_GAMEOVER);
    game->music->win = sfMusic_createFromFile(M_WIN);
    game->music->voice_win = sfMusic_createFromFile(M_VOICE_WIN);
}

void set_player_sprite(st_principal *game)
{
    game->sprite[0] = create_sprite(RUN,(sfVector2f){250, 822},
    (sfIntRect){0, 0, 460, 435}, (sfVector2f){0.35, 0.35});
    game->sprite[1] = create_sprite(CHILL,(sfVector2f){250, 822},
    (sfIntRect){0, 0, 442, 435}, (sfVector2f){0.35, 0.35});
    game->sprite[2] = create_sprite(DIE,(sfVector2f){250, 822},
    (sfIntRect){0, 0, 500, 435}, (sfVector2f){0.35, 0.35});
    game->sprite[3] = create_sprite(DANCE,(sfVector2f){250, 822},
    (sfIntRect){0, 0, 466, 435}, (sfVector2f){0.35, 0.35});
}

void set_map(st_principal *game)
{
    int y = 0;
    int x = 0;
    int obst = 0;

    while (y != 8) {
        while (game->map[y][x] != '\n') {
            obst = set_map_obst_one(game, obst, y, x);
            obst = set_map_obst_two(game, obst, y, x);
            obst = set_map_obst_three(game, obst, y, x);
            x++;
        }
        y++;
        x = 0;
    }
}
