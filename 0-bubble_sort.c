#include "sort.h"

/**
 * bubble_sort - function that sort an array with buble sort algorithm
 * @array: array to be sort
 * @size: array size
 * Return: void function
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int temp, swap_flag = 0, i, big_flag = 1;

	while (big_flag != 0)
	{
		for (i = 1; i < size; i++)
		{
			/* Comparation */
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
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
