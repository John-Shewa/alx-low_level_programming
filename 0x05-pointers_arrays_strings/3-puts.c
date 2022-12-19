#include "main.h"
#include <stdio.h>
/**
 * _puts -  a function that prints a string, followed by a new line
 * @str: an input string
 * Return: 0 (success)
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
