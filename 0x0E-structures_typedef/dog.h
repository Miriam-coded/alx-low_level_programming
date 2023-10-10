#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about the dog
 * @name: represents the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This structure stores the name, age and the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
