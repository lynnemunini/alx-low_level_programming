#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Function that prints _putchar
 * Return: 0 value returned if program executes successfully
 */
int main(void)
{
	int i;
	char string[] = '_putchar';

	for (i = 0; i < strlen(string); i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}

