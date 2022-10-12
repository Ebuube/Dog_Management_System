#include "dog.h"

#include <stdio.h>

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
