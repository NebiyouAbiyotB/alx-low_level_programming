#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: pointer to the first occurrence of the character `c` in the string `s`
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }

    return NULL;
}
