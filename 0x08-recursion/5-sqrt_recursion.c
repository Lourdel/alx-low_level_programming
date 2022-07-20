#include "main.h"

/**
 * power - returns the natural square root of a number.
 * @n: input number.
 * @rt: iterator.
 * Return: square root or -1.
 */
int power(int n, int rt)
{
	if (rt % (n / rt) == 0)
	{
		if (rt * (n / rt) == n)
			return (rt);
		else
			return (-1);
	}
	return (0 + power(n, rt + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
