#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: value of int 1
 * @b: value of int 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
