#include "dog.h"

#include <stdio.h>

/**
 * main - A very simple implementation of the system as it is still
 * under construction
 *
 * Return: Always 0 on success
 */
int main(void)
{
	dog_t *my_dog = 0;

	my_dog = new_dog(); /* allocate memory for dog_t variable */
	my_dog = init_dog(my_dog, "Cherry", "German Shepherd",
			7.4, "John Paul");

	printf("Displaying information about a dog\n");
	print_dog(my_dog);

	return (0);
}
