#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: 0(success)
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char aux;

	while (s[length] != '\0')
		length++;
	while (i < length--)
	{
		aux = s[i];
		s[i++] = s[length];
		s[length] = aux;
	}
}
