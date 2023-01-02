#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: an input string
 * @accept: an input character to locate into string s
 * Return: pointer to s that matches byte in accept
 * or null if such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
