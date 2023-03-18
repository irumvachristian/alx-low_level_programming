#include <stdio.h>

/**
 * main - Prints various size of characters
 *
 * Return: alawys 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
