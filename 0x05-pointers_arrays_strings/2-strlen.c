#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: input string
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	length++;
	return (length);
}

