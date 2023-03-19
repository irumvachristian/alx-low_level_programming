#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and states whether it is negative or positive
 *
 * Return: always 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positve", n);
else if (n == 0)
	printf("%d is zero", n);
else
	printf("%d is negative", n);
printf("\n");
return (0);
}
