#include "main.h"
#include <stdio.h>
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line
 * @s: an input string
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length)
		_putchar(s[--length]);
	_putchar('\n');
}
