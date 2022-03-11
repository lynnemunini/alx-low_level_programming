#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase
  * Return: 0 exit code of the program if successful
 */
int main(void)
{
	char alphabet;
	alphabet = "a";

	while (alphabet <= "z")
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
