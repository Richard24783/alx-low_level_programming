#include <stdio.h>
/**
 *struct dog - name of variable dog
 *@d: pointer to struct dog
 *@name: name to initialize
 */
struct dog
{
	char *name;
	int age;
	char *owner;
};

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
