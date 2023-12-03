/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "runner.h"

int runner_main(int ac, char **av)
{
    if (check_wrong_start(ac) == 84)
        return (84);
    return (check_help_start(ac, av));
}

int main(int ac, char **av)
{
    return (runner_main(ac, av));
}
