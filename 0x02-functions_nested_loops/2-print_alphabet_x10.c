#include "main.h"
/**
 * print_alphabet_x10- Check description
 * Description: Prints lowercase alphabets ten times followed by a new line
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
{
	char ch = 'a';

	while (ch <= 'z')
	_putchar(ch);
}
	_putchar('\n');
	i++;
}
