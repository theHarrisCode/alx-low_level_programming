#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	i = 'A';
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
