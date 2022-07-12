#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - randomly generates passwords
 *
 * @n - password length
 * random_password_gen - function to generate a random password
 * Return : string
*/
Void random_password_gen(int n)
{
	int i = 0;

	int randomizer = 0;

	srand((insigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";

	char password[n];

	randomizer = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			ramdomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main(void)
{
	int n = 10;

	random_password_gen(n);

	return (0);
}
