#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: pointer to dog name
 * @age: age of the dog
 * @owner: dog's owner
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || !age || owner == NULL)
        return (NULL);
    else
    {
        dog_t *d;
        d->name = name;
        d->age = age;
        d->owner = owner;   
        return (d);
    }
}
