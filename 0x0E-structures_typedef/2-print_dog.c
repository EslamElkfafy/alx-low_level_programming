#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: structure of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	if ((*d).age == NULL)
	{
		printf("(nil)");
	}
	if ((*d).owner == NULL)
	{
		printf("(nil)");
	}
	printf("%s", d->name);
	printf("%f", d->age);
	printf("%s", d->owner);
}
