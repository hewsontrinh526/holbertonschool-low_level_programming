#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees a dog
 *
 * @d: dog to be freed
 *
 * Return: Dogs freed from memory
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
