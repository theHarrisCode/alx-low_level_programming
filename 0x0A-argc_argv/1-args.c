#include <stdio.h>
/**
 * main - program that prints number of arguments passed
 * @argc: amount of arguments in command line
 * @argv: command line elements
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
