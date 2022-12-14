#include "main.h"
/**
 * _isalpha - check Description
 * @c: An input character
 * Description: checks if c is a letter or not a letter
 * Return: 1 if it is a letter or 0 if it is not a letter
 */
int _isalpha(int c)
{
	char capital, small;
	int character = 0;

	for (small = 'a' ; small <= 'z' ; small++)
	{
		for (capital = 'A' ; capital <= 'Z'; capital++)
		{
		if (c == small || c == capital)
			character = 1;
	}
	}
	return (character);
}
