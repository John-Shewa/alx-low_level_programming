#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(intType));
	pritnf("Size of float: %lu bytes\n", (unsigned long)sizeof(floatType));
	printf("size of long int: %lu bytes\n", (unsigned long)sizeof(longintType));
	printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(longlongintType));
	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(charTypre));
	return (0);
}
