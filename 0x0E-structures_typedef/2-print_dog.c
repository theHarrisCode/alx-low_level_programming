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
<<<<<<< HEAD
		printf("Age: ");
		if (!d->age)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);
=======
		if (d->age)
			printf("Age: %f\n", d->age);
>>>>>>> 60ccff4ceed316efe64e74f24c720f5c4c44c06c
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
<<<<<<< HEAD
	else
		printf("");
=======
>>>>>>> 60ccff4ceed316efe64e74f24c720f5c4c44c06c
}
