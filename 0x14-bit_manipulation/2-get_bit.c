#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: the bit
 * @index: the index to get the value
 * Return:-1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
