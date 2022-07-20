#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: - number given
 * Return: -1 if lower than 0 and 0 if successful
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
