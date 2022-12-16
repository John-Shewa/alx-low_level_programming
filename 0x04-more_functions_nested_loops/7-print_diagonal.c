#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n > 0)
	{
		for (; j < n; j++)
		{
			for (i = 0; i < j; i++)
				_putchar(' ');
			_putchar('92');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
