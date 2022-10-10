#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function creates a new dog
 * @name: character string contains dog's name
 * @age: integer contains dog's age
 * @owner: character string contains dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *Dog;
	int i, j, k;
	char *n, *o;

	Dog = malloc(sizeof(struct dog));
	if (Dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(Dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(Dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	Dog->name = n;
	Dog->age = age;
	Dog->owner = o;

	return (Dog);
}
