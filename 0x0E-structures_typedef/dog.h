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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

