#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for strut dog
 *
 */
typedef struct dog dog_t;

/**
 * struct dog - struct stores some info of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: own: struct called "dog" that stores its name, its age
 * and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
