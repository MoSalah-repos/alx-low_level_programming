#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure contains the characteristics of a dog
 * @name: character string contains name of a dog
 * @age: integer contains age of a dog
 * @owner: character string contains owner of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

