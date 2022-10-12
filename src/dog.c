#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - allocates memory for new dog
 * Return: pointer to type dog_t else, NULL if malloc fails
 */
dog_t *new_dog(void)
{
	dog_t* tmp = 0;

	tmp = (dog_t *) malloc(sizeof(dog_t));
	if (tmp == 0)
	{
		printf("Memory for new dog, unavailable\n");
		return (0);
	}

	return (tmp);
}

/**
 * init_dog - initializes the details of the dog
 * @dog: pointer to dog_t type
 * @dog_name: name of the dog
 * @breed: the breed of the dog
 * @age_in_months: age of the dog in months
 * @owner_name: name of the owner
 *
 * Description: if owner's name is not passed, let the dog be STRAY DOG
 * if the dog has no name, let it be UNKNOWN,
 * and if there is no mention breed, let it be UNCLASSIFIED
 * Return: pointer to dog_t type
 */
dog_t *init_dog(dog_t *dog, char *dog_name, char *breed,
		float age_in_months, char *owner_name)
{
	if (dog == 0)
	{
		printf("No dog passed for initialization\n");
		return (0);
	}
	dog->name = dog_name;
	dog->breed = breed;
	dog->age = age_in_months;
	dog->owner = owner_name;

	return (dog);
}

/**
 * print_dog - prints the record for a dog to stdout
 * @dog: pointer to dog_t type
 *
 * Return: the number of details in the dog variable passed
 */
int print_dog(dog_t *dog)
{
	int count = 0;

	if (dog == 0)
	{
		printf("No dog passed for printing\n");
		return (0);
	}
	printf("Name:\t");
	if (dog->name == 0 || dog->name[0] == '\0')
	{
		printf("UNKOWN\n");
	}
	else
		printf("%s\n", dog->name), count++;

	printf("Breed:\t");
	if (dog->breed == 0 || dog->breed[0] == '\0')
	{
		printf("UNCLASSIFIED\n");
	}
	else
		printf("%s\n", dog->breed), count++;

	printf("Age:\t%.2f months\n", dog->age), count++;

	printf("Owner:\t");
	if(dog->owner == 0 || dog->owner[0] == '\0')
	{
		printf("STRAY DOG\n");
	}
	else
		printf("%s\n", dog->owner), count++;

	return (count);
}
