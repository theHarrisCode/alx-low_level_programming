#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments in command line
 * @argv: argument vector, one dimensional array
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int int1, int2, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	int1 = atoi(argv[1]);
	int2 = atoi(argv[2]);
	product = int1 * int2;
	printf("%d\n", product);
	(void)argc;
	return (0);
}
