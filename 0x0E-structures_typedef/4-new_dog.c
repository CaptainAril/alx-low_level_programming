#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Returns dog_t (struct dog)
 * NULL if failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dg;

dg = malloc(sizeof(dog_t));
if (dg == NULL)
{
return (NULL);
}
dg->name = name;
dg->age = age;
dg->owner = owner;

return (dg);
}
