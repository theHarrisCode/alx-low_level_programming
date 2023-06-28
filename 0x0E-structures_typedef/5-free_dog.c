#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - funtion that frees the dogs
 * @d: pointer to type dog_t
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
