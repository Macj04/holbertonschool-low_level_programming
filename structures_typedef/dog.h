#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - define a new type struct dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog_t - dog type
 * @name:string
 * @age:float
 * @owner:string1
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
