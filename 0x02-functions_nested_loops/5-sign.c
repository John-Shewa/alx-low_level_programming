#include "main.h"
/**
 * print_sign - check main
 * @n: An input number
 * Description: checks if c is a letter or not a letter
 * Return: 1 if it is a letter or 0 if it is 0 or
 * -1 if it is not a letter
 */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
