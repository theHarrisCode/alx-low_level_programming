#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *src, char *dest);
void free_dog(dog_t *d);

#endif
