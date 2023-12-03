/*
** EPITECH PROJECT, 2022
** check_start
** File description:
** check_start
*/

#include "runner.h"

int display_help(char *filepath, st_help *h)
{
    if ((h->fd = open(filepath, O_RDONLY)) == -1)
        return (84);
    h->buffer = malloc(sizeof(char) * SIZE_H);
    h->size = SIZE_H;
    read(h->fd, h->buffer, h->size);
    my_putstr(h->buffer);
    free(h->buffer);
    return (0);
}

int open_map(st_principal *game, st_map *map, char *filepath)
{
    map->fd = fopen(filepath, "r");
    map->line = NULL;
    map->len = 0;
    int i = 0;

    game->map = malloc(sizeof(char *) * 10);
    while ((map->read = getline(&map->line, &map->len, map->fd)) != -1) {
        game->map[i] = malloc(sizeof(char) * map->read + 1);
        game->map[i] = map->line;
        map->line = NULL;
        i++;
    }
    if (i != 8)
        return (84);
    fclose(map->fd);
    free(map->line);
    return (0);
}

int check_start_runner(st_principal *game, char **av)
{
    st_map map;

    if (open_map(game, &map, av[1]) == 84) {
        return (84);
    }
    return (runner(game));
}

int check_wrong_start(int ac)
{
    if (ac > 2 || ac < 2) {
        my_putstr("./my_runner: bad arguments:"
            " 0 given but 1 is required\nretry with -h\n");
        return (84);
    }
    return (0);
}

int check_help_start(int ac, char **av)
{
    st_help h;
    st_principal game;

    if ((ac == 2) && (my_strcmp(av[1], "-h") == 0))
        return (display_help("help", &h));
    if ((ac == 2) && (my_strlen(av[1]) != 9))
        return (84);
    if (ac == 2)
        return (check_start_runner(&game, av));
    return (0);
}
