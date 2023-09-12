#include "main.h"

/**
 * malloc_checked - functions allocation practice
 * @b: size of memory
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if(s != null)
	{
		free(s);
		return(s);
	}
	return(NULL);
}
