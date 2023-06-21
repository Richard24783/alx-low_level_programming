#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initializes a variable of tpye struct dog
 *@d: has to do with dog to be initialized
 *@name: dog's name
 *@age: the dog's age
 *@owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
