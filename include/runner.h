/*
** EPITECH PROJECT, 2021
** runner.h
** File description:
** runner.h
*/

#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include <math.h>
#include <time.h>
#include "my.h"

#ifndef _RUNNER_H
    #define _RUNNER_H
    #define H "HUNTED RUNNER"
    #define M_MENU "res/music/menu.ogg"
    #define M_SELECT_O "res/music/menu_select_o.ogg"
    #define M_SELECT_T "res/music/menu_select_t.ogg"
    #define M_INGAME "res/music/ingame.ogg"
    #define M_DIE "res/music/die.ogg"
    #define M_GAMEOVER "res/music/game_over.ogg"
    #define M_WIN "res/music/win.ogg"
    #define M_VOICE_WIN "res/music/voice_win.ogg"
    #define RUN "res/run.png"
    #define CHILL "res/chill.png"
    #define DIE "res/die.png"
    #define DANCE "res/dance.png"
    #define FONT_O "res/m.otf"
    #define FONT_T "res/bold.ttf"
    #define P0 "res/p/m.png"
    #define P1 "res/p/1.png"
    #define P2 "res/p/2.png"
    #define P3 "res/p/3.png"
    #define P4 "res/p/4.png"
    #define P5 "res/p/5.png"
    #define P6 "res/p/6.png"
    #define P7 "res/p/7.png"
    #define P8 "res/p/8.png"
    #define P9 "res/p/9.png"
    #define PIKE0 "res/obst/pike_a0.png"
    #define PIKE1 "res/obst/pike_a1.png"
    #define PIKE2 "res/obst/pike_a2.png"
    #define PUM0 "res/obst/pum_0.png"
    #define PUM0L "res/obst/pum_0_l.png"
    #define PUM1 "res/obst/pum_1.png"
    #define PUM1L "res/obst/pum_1_l.png"
    #define GHOST "res/obst/ghost.png"
    #define PLAY 1
    #define INF 2
    #define EXIT 3
    #define RESTART 1
    #define MENU2 2
    #define EXIT2 3
    #define WIN 1
    #define LOSE 2
    #define YES 1
    #define NO 0
    #define R 800
    #define SIZE_H 12848

enum game_state {
    MENU,
    GAME,
    END,
};

typedef struct st_map{
    FILE *fd;
    ssize_t read;
    size_t len;
    char *line;
}st_map;

typedef struct st_hit{
    int i;
    int x;
    int y;
    int obst_x;
    int obst_y;
}st_hit;

typedef struct st_obst{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    int kill;
}st_obst;

typedef struct st_txt {
    sfFont *text_type;
    sfText *text;
    sfVector2f pos;
}st_txt;

typedef struct st_p_sprite {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    sfVector2f scale;
}st_p_sprite;

typedef struct st_parallax {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
}st_parallax;

typedef struct st_help {
    int fd;
    char *buffer;
    int size;
}st_help;

typedef struct st_read_map {
    int fd;
    char *buffer;
    int size;
    int nb_obst;
    int obst;
}st_read_map;

typedef struct st_music {
    sfMusic *menu;
    sfMusic *menuselect_o;
    sfMusic *menuselect_t;
    sfMusic *ingame;
    sfMusic *die;
    sfMusic *gameover;
    sfMusic *win;
    sfMusic *voice_win;
}st_music;

typedef struct st_principal {
    sfEvent event;
    sfRenderWindow *w;
    sfClock *clock;
    sfTime time;
    char *score;
    char *score_final;
    int status;
    int check_run;
    int number_score;
    int reset_map;
    int jump;
    float seconds;
    int select;
    char **map;
    int nb_obst;
    int infinity;
    st_music *music;
    st_txt *txt[12];
    st_parallax *plx[10];
    st_p_sprite *sprite[3];
    st_obst *obst[1000];
}st_principal;

int runner_main(int ac, char **av);
int check_wrong_start(int ac);
int check_help_start(int ac, char **av);
int display_help(char *filepath, st_help *h);
int check_start_runner(st_principal *game, char **av);
int open_map(st_principal *game, st_map *map, char *filepath);
int runner(st_principal *game);
void set_game(st_principal *game);
void set_window_clock(st_principal *game);
void set_music(st_principal *game);
void set_player_sprite(st_principal *game);
void set_map(st_principal *game);
int set_map_obst_one(st_principal *game, int obst, int y, int x);
int set_map_obst_two(st_principal *game, int obst, int y, int x);
int set_map_obst_three(st_principal *game, int obst, int y, int x);
void set_pike_a_z(st_principal *game, int obst, int y, int x);
void set_pike_a_o(st_principal *game, int obst, int y, int x);
void set_pike_a_t(st_principal *game, int obst, int y, int x);
void set_pike_a_u(st_principal *game, int obst, int y, int x);
void set_pum_z(st_principal *game, int obst, int y, int x);
void set_pum_l(st_principal *game, int obst, int y, int x);
void set_pum_o(st_principal *game, int obst, int y, int x);
void set_pum_om(st_principal *game, int obst, int y, int x);
void set_ghost(st_principal *game, int obst, int y, int x);
void set_text(st_principal *game);
void set_text_two(st_principal *game);
void set_parallax(st_principal *game);
void set_parallax_two(st_principal *game);
st_obst *create_obst(st_principal *game, char *path,
sfVector2f pos, sfIntRect rect);
st_p_sprite *create_sprite(char *path, sfVector2f pos,
sfIntRect rect, sfVector2f scale);
st_txt *create_text(char *path, sfVector2f pos, char *text, int size);
st_parallax *create_parallax(char *path, sfVector2f pos, sfIntRect rect);
void music_start(st_principal *game);
void check_event(st_principal *game);
void my_clock(st_principal *game);
void find_choice(st_principal *game);
void runner_menu(st_principal *game);
void set_runner_menu(st_principal *game);
void set_menu_parallax(st_principal *game);
void check_menu_parallax(st_principal *game);
void chill_moove(st_principal *game);
void moove_run(st_principal *game);
void moove_die(st_principal *game);
void moove_dance(st_principal *game);
void option_menu(st_principal *game);
void select_option_menu(st_principal *game);
void top_down_moove_menu(st_principal *game);
void color_option_menu(st_principal *game);
void choose_option_menu(st_principal *game);
void music_game(st_principal *game);
void runner_game(st_principal *game);
void set_runner_game(st_principal *game);
void set_game_all(st_principal *game);
void draw_text_game(st_principal *game);
void set_jump(st_principal *game);
void jump(st_principal *game);
void set_hit(st_principal *game);
void set_st_hit(st_principal *game, st_hit *h);
void condition_hit(st_principal *game, st_hit *h);
void check_win(st_principal *game);
void moove_objects(st_principal *game);
void moove_inf_objects(st_principal *game);
void moove_parallax(st_principal *game);
void moove_obst(st_principal *game);
void moove_inf_obst(st_principal *game);
void set_score(st_principal *game, long nbr);
void display_score(st_principal *game);
void music_gameover(st_principal *game);
void music_win(st_principal *game);
void runner_end(st_principal *game);
void set_runner_end(st_principal *game);
void set_one_end(st_principal *game);
void set_two_end(st_principal *game);
void first_set_end(st_principal *game);
void choice_moove(st_principal *game);
void option_end(st_principal *game);
void select_option_end(st_principal *game);
void top_down_moove_end(st_principal *game);
void color_option_end(st_principal *game);
void choose_option_end(st_principal *game);
void reset_game(st_principal *game);
void top_music(st_principal *game);
void bottom_music(st_principal *game);
void reset_music(st_principal *game);
void destroy_all(st_principal *game);
void destroy_music(st_principal *game);

#endif
