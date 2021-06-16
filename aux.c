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
