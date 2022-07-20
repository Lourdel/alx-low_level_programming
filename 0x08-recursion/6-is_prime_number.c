#include "main.h"

/**
 * is_prime - detects if the input number is prime.
 * @n: input number.
 * @rt: iterator.
 * Return: 1 if n is a prime number and 0 if n is not prime
 */
int is_prime(unsigned int n, unsigned int rt)
{
	if (n % rt == 0)
	{
		if (n == rt)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, rt + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (1);
	return (is_prime(n, 2));
}
