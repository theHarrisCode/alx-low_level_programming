#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *src, char *dest);
/**
 * new_dog - function that creates a new dog
 * @name: pointer to dog name
 * @age: age of the dog
 * @owner: dog's owner
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_length, owner_length;

	if (name != NULL && owner != NULL)
	{
		name_length = _strlen(name) + 1;
		owner_length = _strlen(owner) + 1;
		d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);
		d->name = malloc(sizeof(char) * name_length);
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
		_strcpy(d->name, name);
		d->age = age;
		d->owner = malloc(sizeof(char) * owner_length);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		_strcpy(d->owner, owner);
		return (d);
	}
	return (NULL);
}
/**
 * _strlen - counts the length of a string
 * @s: string to be counted
 * Return: the legnth of the string
 */
int _strlen(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; *(s + i) != '\0'; i++)
		j++;
	return (j);
}
/**
 * _strcpy - copies from source to destination
 * @dest: where the string will be copied to
 * @src: the string to be copied
 * Return: pointer to the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i++) = '\0';
	return (dest);
}
