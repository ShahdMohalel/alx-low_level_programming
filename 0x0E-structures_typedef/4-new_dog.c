#include "dog.h"
/**
 * new_dog - create a dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: doge.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doge;
doge = malloc(sizeof(dog_t));
if (doge == NULL)
{
return (NULL);
}
doge->name = name;
doge->owner = owner;
doge->age = age;
return (doge);
}
