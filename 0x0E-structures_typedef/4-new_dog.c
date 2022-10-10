#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name to create a new struct
 * @age: age to create a new struct
 * @owner: owner to create a new struct
 *
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog =  malloc(sizeof(dog_t));
	if (n_dog)
	{
		n_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
		if (n_dog->name)
		{
			n_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
			if (n_dog->owner)
			{
				_strcpy(n_dog->name, name);
				_strcpy(n_dog->owner, owner);
				n_dog->age = age;
				return (n_dog);
			}
			else
				free(n_dog->name);
				free(n_dog);
		}
		else
			free(n_dog);
	}
	return (NULL);
}
