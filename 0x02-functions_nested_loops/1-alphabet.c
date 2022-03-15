#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if successful
 */

int main(void)
{
	char aphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
