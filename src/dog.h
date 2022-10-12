#ifndef _DOG_T
#define _DOG_T

/**
 * struct dog - for holding details for a dog manager
 * @name: name of the given dog
 * @owner: name of the dog's owner
 * @breed: the breed of the dog
 * @age: age of the dog in months
 */
struct dog
{
	char *name;
	char *owner;
	char *breed;
	float age;
};

/**
 * dog_t - typedef struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(void);
dog_t *init_dog(dog_t *dog, char *dog_name, char *breed,
		float age_in_months, char *owner_name);
int print_dog(dog_t *dog);

#endif	/* _DOG_H */
