#include "main.h"

/**
 * _memcpy - copies a number of bytes from the memory src to dest area
 * @dest: destination area where copied bytes are moved
 * @src: source memory area
 * @n: number of bytes copied
 * Return: poiter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
