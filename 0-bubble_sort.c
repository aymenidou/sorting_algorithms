#include "sort.h"

/**
 * bubble_sort - sort an array using bubble sort
 * @array: array to be sorted
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	if (!array || size <= 1)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
