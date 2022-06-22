#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - a function creates a new dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 * Return: pointer to dog, NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int new_name = 0, new_own = 0;
	if (name != NULL && owner != NULL)
	{
		new_name = strlen(name) + 1;
		new_own = strlen(owner) + 1;
		doggo = malloc(sizeof(dog_t));

		if (doggo == NULL)
			return (NULL);

		doggo->name = malloc(sizeof(char) * new_name);

		if (doggo->name == NULL)
		{
			free(doggo);
			return (NULL);
		}

		doggo->owner = malloc(sizeof(char) * new_own);

		if (doggo->owner == NULL)
		{
			free(doggo->name);
			free(doggo);
			return (NULL);
		}

		doggo->name = strcpy(doggo->name, name);
		doggo->owner = strcpy(doggo->owner, owner);
		doggo->age = age;
	}
	return (doggo);
}
