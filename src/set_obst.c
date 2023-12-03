/*
** EPITECH PROJECT, 2022
** set_obst
** File description:
** set_obst
*/

#include "runner.h"

int set_map_obst_three(st_principal *game, int obst, int y, int x)
{
    switch (game->map[y][x]) {
        case 'Q':
            obst++;
            set_pum_o(game, obst, y, x);
            break;
        case 'M':
            obst++;
            set_pum_om(game, obst, y, x);
            break;
        case 'G':
            obst++;
            set_ghost(game, obst, y, x);
            break;
    }
    return (obst);
}

int set_map_obst_two(st_principal *game, int obst, int y, int x)
{
    switch (game->map[y][x]) {
        case 'U':
            obst++;
            set_pike_a_u(game, obst, y, x);
            break;
        case 'P':
            obst++;
            set_pum_z(game, obst, y, x);
            break;
        case 'L':
            obst++;
            set_pum_l(game, obst, y, x);
            break;
    }
    return (obst);
}

int set_map_obst_one(st_principal *game, int obst, int y, int x)
{
    switch (game->map[y][x]) {
        case '0':
            obst++;
            set_pike_a_z(game, obst, y, x);
            break;
        case '1':
            obst++;
            set_pike_a_o(game, obst, y, x);
            break;
        case '2':
            obst++;
            set_pike_a_t(game, obst, y, x);
            break;
    }
    return (obst);
}
