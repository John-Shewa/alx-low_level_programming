#include "main.h"
/**
 * _islower - check Description
 * Description: checks for lower character
 * Return: 0 (success)
 */
int _islower(void)
{
	char ch;

	if (ch >= 'A' && ch <= 'Z')
	{
	_putchar('0');
	}
	else if (ch >= 'a' && ch <= 'z')
	{
	_putchar('1');
	_putchar('\n');
	}
	return (0);
}
