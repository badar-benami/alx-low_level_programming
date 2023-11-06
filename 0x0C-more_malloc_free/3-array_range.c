#include <stdlib.h>
#include "main.h"

/**
<<<<<<< HEAD
 * *array_range-----Generates an integer array.
=======
 * *array_range-----Generates an integer array.
>>>>>>> a34a5e00ca98f4d78319b92e8cb8a8d931cc0928
 * @min:Lowest possible range of values kept.
 * @max:Maximum range of values stored and number of elements.
 *
 * Return:Link to the updated array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
