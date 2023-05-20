#include <stdio.h>
/**
 * main - program that prints all the numbers of of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 0x30;
	while (c <= 0x39)
	{
		putchar(c);
		c++;
	}
	c = 0x61;
	while (c <= 0x7A)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
