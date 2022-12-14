#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	putchar(_putchar);
	putchar('\n');
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
