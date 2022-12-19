#include "main.h"
#include <stdio.h>
/**
 * swap_int: a function that swaps the values of two integers
 * @a: integer value pointer
 * @b: integer value pointer
 * Return: 0 (success)
 */
void swap_int(int *a, int *b);
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
