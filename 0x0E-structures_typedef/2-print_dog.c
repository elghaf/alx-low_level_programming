#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - struct dog
 * @d: struct dog for printf
 */
void print_dog(struct dog *d)
{
char name, owner;
int age;

name = d->name;
owner = d->owner;
age = d->age;
printf("Name: %s", name);
printf("Age: %d", age);
printf("Owner: %s", owner);
}
