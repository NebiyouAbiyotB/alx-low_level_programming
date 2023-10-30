#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory where data is stored
 * @src: memory where data is copied from
 * @n: number of bytes to be copied
 *
 * Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	unsigned int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
