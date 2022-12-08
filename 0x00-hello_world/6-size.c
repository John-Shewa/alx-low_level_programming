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
	printf("Size of longint: %lu bytes\n", sizeof(doubleType));
	printf("Size of char: %lu bytes\n", sizeof(charType));
	return (0);
}
