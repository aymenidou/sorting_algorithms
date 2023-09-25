#include "sort.h"

/**
 * bubble_sort - sort an array using bubble sort
 * @array: array to be sorted
 * @size: array size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size <= 1)
	{
		print_array(array, size);
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				array[i] += array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j];
			}
			print_array(array, size);
		}

	}

}
