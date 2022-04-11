#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 * Return: 0 if program runs successfully
 */
int main(void)
{
	putchar(__FILE__);
	putchar('\n');
	return (0);
}
