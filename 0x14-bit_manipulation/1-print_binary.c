#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: 0 if program executes successfully
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 7; i >= 0; i--) 
	{
		_putchar(((n >> i) & 1));
	}
}
