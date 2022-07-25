# include "main.h"
#include <stdlib.h>

/**
 * create_array- creates an array of characters
 * and initialises it with a specific character
 * @size: size of an array
 * @c: character stored
 * Return: pointer of an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
