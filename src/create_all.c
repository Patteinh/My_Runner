/*
** EPITECH PROJECT, 2021
** set_obj_menu
** File description:
** set_obj_menu
*/

#include "runner.h"

st_obst *create_obst(st_principal *game, char *path,
sfVector2f pos, sfIntRect rect)
{
    st_obst *create = malloc(sizeof(st_obst));

    if (create == NULL)
        return (NULL);
    create->sprite = sfSprite_create();
    create->texture = sfTexture_createFromFile(path, NULL);
    create->rect = rect;
    create->pos = pos;
    sfSprite_setTexture(create->sprite, create->texture, sfTrue);
    sfSprite_setTextureRect(create->sprite, create->rect);
    sfSprite_setPosition(create->sprite, create->pos);
    game->nb_obst++;
    return (create);
}

st_p_sprite *create_sprite(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale)
{
    st_p_sprite *create = malloc(sizeof(st_p_sprite));

    if (create == NULL)
        return (NULL);
    create->sprite = sfSprite_create();
    create->texture = sfTexture_createFromFile(path, NULL);
    create->rect = rect;
    create->pos = pos;
    create->scale = scale;
    sfSprite_setTexture(create->sprite, create->texture, sfTrue);
    sfSprite_setTextureRect(create->sprite, create->rect);
    sfSprite_setPosition(create->sprite, create->pos);
    sfSprite_setScale(create->sprite, create->scale);
    return (create);
}

st_txt *create_text(char *path, sfVector2f pos, char *text, int size)
{
    st_txt *create = malloc(sizeof(st_txt));

    if (create == NULL)
        return (NULL);
    create->text_type = sfFont_createFromFile(path);
    create->text = sfText_create();
    sfText_setString(create->text, text);
    sfText_setFont(create->text, create->text_type);
    sfText_setCharacterSize(create->text, size);
    sfText_setPosition(create->text, pos);
    return (create);
}

st_parallax *create_parallax(char *path, sfVector2f pos, sfIntRect rect)
{
    st_parallax *create = malloc(sizeof(st_parallax));

    if (create == NULL)
        return (NULL);
    create->sprite = sfSprite_create();
    create->texture = sfTexture_createFromFile(path, NULL);
    create->rect = rect;
    create->pos = pos;
    sfSprite_setTexture(create->sprite, create->texture, sfTrue);
    sfSprite_setTextureRect(create->sprite, create->rect);
    sfSprite_setPosition(create->sprite, create->pos);
    return (create);
}
