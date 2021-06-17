#include "sort.h"

/**
 * swap_int - function that swap two elements of an array
 * @e1: first element
 * @e2: second element
 * Return: void function
 */
void swap_int(int *e1, int *e2)
{
	int tmp = *e1;

	*e1 = *e2;
	*e2 = tmp;
}

/**
 *selection_sort - sort an array of integers using the Selection sort algorithm
 *@array: array to be sort
 *@size: array lenght
 *Return: void function
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, jmin;

	for (i = 0; i < size; i++)
	{
		jmin = i;
		for (j = i + 1; j < size; j++)
		{
			/* if this element is less, then it is the new minimum */
			if (array[j] < array[jmin])
			{
				/* found new minimum; remember its index */
				jmin = j;
			}
		}
		if (jmin != i)
		{
			swap_int(&array[i], &array[jmin]);
			print_array(array, size);
		}
	}
}
