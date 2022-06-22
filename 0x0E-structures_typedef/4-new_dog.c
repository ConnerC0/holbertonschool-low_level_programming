#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function creates a new dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 * Return: pointer to dog, NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int a, b, i;

	a = 0, b = 0, i = 0;
	while (name[a++] != '\0')
		;
	while (owner[b++] != '\0')
		;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(a);
	new_dog->owner = malloc(b);

	do {
		new_dog->name[i] = name[i];
	} while (name[i++] != '\0');
	i = 0;
	do {
		new_dog->owner[i] = owner[i];
	} while (owner[i++] != '\0');
	new_dog->age = age;
	return (new_dog);
}
