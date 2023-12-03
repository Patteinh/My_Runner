/*
** EPITECH PROJECT, 2022
** set_game_two
** File description:
** set_game_two
*/

#include "runner.h"

void set_text(st_principal *game)
{
    for (int i = 0; i != 10; i++)
        game->txt[i] = 0;
    game->txt[0] = create_text(FONT_O,
    (sfVector2f){1330, 250}, "Hunted Runner", 50);
    game->txt[1] = create_text(FONT_O,
    (sfVector2f){1455, 435}, "PLAY", 45);
    game->txt[2] = create_text(FONT_O,
    (sfVector2f){1455, 535}, "INFINITY", 45);
    game->txt[3] = create_text(FONT_O,
    (sfVector2f){1455, 645}, "EXIT", 45);
    game->txt[4] = create_text(FONT_T,
    (sfVector2f){1610, -10}, "0", 50);
    game->txt[5] = create_text(FONT_O,
    (sfVector2f){1600, -10}, "Score", 50);
    set_text_two(game);
}

void set_text_two(st_principal *game)
{
    game->txt[6] = create_text(FONT_O,
    (sfVector2f){1500, 0}, "YOUR SCORE : ", 50);
    game->txt[7] = create_text(FONT_O,
    (sfVector2f){80, 30}, "YOU LOSE !", 120);
    game->txt[8] = create_text(FONT_O,
    (sfVector2f){1455, 435}, "REPLAY", 45);
    game->txt[9] = create_text(FONT_O,
    (sfVector2f){1455, 535}, "MENU", 45);
    game->txt[10] = create_text(FONT_O,
    (sfVector2f){1455, 635}, "EXIT", 45);
    game->txt[11] = create_text(FONT_O,
    (sfVector2f){80, 30}, "YOU WIN !", 120);

}

void set_parallax(st_principal *game)
{
    for (int i = 0; i < 9; i++)
        game->plx[i] = 0;
    game->plx[0] = create_parallax(P0,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[1] = create_parallax(P1,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[2] = create_parallax(P2,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[3] = create_parallax(P3,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[4] = create_parallax(P4,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    set_parallax_two(game);
}

void set_parallax_two(st_principal *game)
{
    game->plx[5] = create_parallax(P5,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[6] = create_parallax(P6,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[7] = create_parallax(P7,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[8] = create_parallax(P8,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
    game->plx[9] = create_parallax(P9,
    (sfVector2f){0, 0}, (sfIntRect){0, 0, 3840, 1080});
}
