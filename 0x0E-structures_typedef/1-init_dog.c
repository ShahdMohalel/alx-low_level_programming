#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initiat struct.
 * @d: The parameter 'd' represents the dog struct
 * @name: the name.
 * @age: the age.
 * @owner: the owner.
 * Return: no return.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
