/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** Function my_strncpy
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int nb)
{
    char *new_str = NULL;

    if (!src)
        return NULL;
    new_str = malloc(sizeof(char) * nb + 1);
    for (int i = 0; src[i] != '\0' && i < nb; i += 1)
        new_str[i] = src[i];
    new_str[my_strlen(new_str)] = '\0';
    return new_str;
}
