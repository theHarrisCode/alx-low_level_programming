#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: structure of dog type
 * @name: pointer to dog name
 * @age: float of dog age
 * @owner: pointer to the owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
