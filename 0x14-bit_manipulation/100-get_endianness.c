#include "main.h"
#include <stdio.h>
/**
 * get_endianness - returns the endian of the processor
 * Return: 1 for little and 0 for big
 */
int get_endianness(void)
{
	unsigned int i;

	return ((int)(((char *)&i)[0]));
}
