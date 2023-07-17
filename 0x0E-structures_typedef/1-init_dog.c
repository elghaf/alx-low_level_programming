#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init struct dog
 * @d: pointer of struct dog
 * @name: name of init dog
 * @age: age dog
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        d = malloc(sizeof(struct dog));
    d->name = name;
    d->age = age;
    d->owner = owner;
}
