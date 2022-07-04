#include <stdio.h>
/**
 * main - print possible combination of two two digit numbers
 * Return: Always 0
*/
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
