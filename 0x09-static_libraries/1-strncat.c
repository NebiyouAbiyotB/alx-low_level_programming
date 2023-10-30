#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: String to be appended to
 * @src: String to append
 * @n: Maximum number of bytes to be appended
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
