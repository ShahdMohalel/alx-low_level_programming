#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
d->name = "(nil)";
return;
}
if (d->age == NULL)
{
d->age = "(nil)";
return
}
if (d->owner == NULL)
{
d->owner = "(nil)";
return
}
printf("NAME: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
