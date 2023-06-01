#include <stdio.h>
/**
 * print_array - print n elements
 * @a: array of int
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d",*(a + i));
		if (i < n -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
