#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets and end with a new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	_putchar (ch);
	_putchar('\n');
}
