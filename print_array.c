#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t q;

	q = 0;
	while (array && q < size)
	{
		if (q > 0)
			printf(", ");
		printf("%d", array[q]);
		++w;
	}
	printf("\n");
}
