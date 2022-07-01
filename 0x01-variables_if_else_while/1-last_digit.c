#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*
 * Main determines either number is grater than 5, less than 6 or is 0
 * Return: always 0 (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is grater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is grater than 0\n", n);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
