#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == '9')
		{
			putchar(i);
			i++;
		}
		else
		{
			putchar(i);
			putchar(',');
			i++;
		}
	}
	putchar('\n');
	return (0);
}
