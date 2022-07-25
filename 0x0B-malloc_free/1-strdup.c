#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly alocated space in memory
 * @str: string
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *optstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	optstr = (char *)malloc(sizeof(char) * (i + 1));

	if (optstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		optstr[j] = str[i];

	return (optstr);
}
