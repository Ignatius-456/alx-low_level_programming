#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: dog to initialize
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
