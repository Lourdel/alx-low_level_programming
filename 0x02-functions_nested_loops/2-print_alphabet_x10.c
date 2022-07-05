#include "main.h"
/**
 * print_alphabet_x10 - prints the lower case alphabet 10 time
 * Return: always 0
 *
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

