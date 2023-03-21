#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 * Return:new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	m = malloc(sizeof(dog_t));

	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	m->name = malloc(strlen(name) + 1);
	if (m->name == NULL)
	{
		free(m);
		return (NULL);
	}
	m->owner = malloc(strlen(owner) + 1);
	if (m->owner == NULL)
	{
		free(m->name);
		free(m);
		return (NULL);
	}
	strcpy(m->name, name);
	strcpy(m->owner, owner);
	m->age = age;
	return (m);
}
