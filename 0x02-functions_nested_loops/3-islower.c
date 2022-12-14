#include "main.h"
/**
 * _islower - check Description
 * Description: checks for lower character
 * Return: 1 if it is lowercase or 0 if it is uppercase
 */
int _islower(int c)
{
	char ch;
	int lowercase = 0;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == c)
			lowercase = 1;
	}
	return (lowercase);
}
