#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - funtion that frees the dogs
 * @d: pointer to type dog_t
 */
void free_dog(dog_t *d)
{
	/**Remember to ALWAYS check if the pointer is NULL or not**/
	if (!d)
		return; /**return; is used to exit the function**/
	free(d->name);
	free(d->owner);
	free(d);
}
