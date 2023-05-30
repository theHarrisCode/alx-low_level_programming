#include "main.h"
/**
 * swap_int - swap two integers using pointers
 * @a: first pointer passed
 * @b: second pointer passed
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*temp = a;
	*a = b;
	*b = temp;
}
