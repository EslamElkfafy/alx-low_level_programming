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
		putchar((char)0);
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	if ((*d).age == 0.0)
	{
		printf("(nil)");
	}
	if ((*d).owner == NULL)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
