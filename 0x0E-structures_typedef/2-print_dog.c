#include "dog.h"
#include <stodi.h>
/**
 * print_dog - prints a struct dog
 * @d: output
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
