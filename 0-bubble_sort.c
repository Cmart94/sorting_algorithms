#include "sort.h"

/**
 * bubble_sort - function that sort an array with buble sort algorithm
 * @array: array to be sort
 * @size: array size
 * Return: void function
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int swap_flag = 0, i, big_flag = 1;

	while (big_flag != 0)
	{
		for (i = 1; i < size; i++)
		{
			/* Comparation */
			if (array[i - 1] > array[i])
			{
				swap_int(&array[i - 1], &array[i]);
				swap_flag = 1;
				print_array(array, size);
			}
		}
		if (swap_flag == 1)
			swap_flag = 0;
		else
			big_flag = 0;
	}
}

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


