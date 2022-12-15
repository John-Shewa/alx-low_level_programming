#include "main.h"
/**
 * _isupper - A fucntion that check if there is an uppercase character
 * @c: An output character
 * Return: 1 if c is uppercase else print 0
 */

int _isupper(int c);
{
	char letter = 'A';
	int isupper = 0;

	for (; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			isupper = 1;
			break;
		}
		return (isupper);
	}
}
