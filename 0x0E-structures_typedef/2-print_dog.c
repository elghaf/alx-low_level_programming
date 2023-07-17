#include <stdlib>
#include "dog.h"

/**
 * @
 * 
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
return (0);
}
