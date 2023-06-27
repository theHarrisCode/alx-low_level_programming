#include <stdio.h>
#include "dog.h"
/**
 * print_dog - void function that prints out the dog items
 * @d: pointer of a structute of type dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
