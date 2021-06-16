#include "sort.h"

/**
 * insertion_sort_list - Creates a doubly linked list from an array of integers
 *
 * @list: Array to convert to a doubly linked list
 *
 * Return: void function
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;
	int *array_tmp;
	unsigned int i = 0, j = 0,  list_len = 0;

	while (tmp)
	{
		++list_len;
		tmp = tmp->next;
	}
	array_tmp = malloc(list_len * sizeof(int));
	tmp = *list;
	while (tmp)
	{
		array_tmp[i] = tmp->n;
		tmp = tmp->next;
		i++;
	}
	for (i = 1; i <= list_len - 1; i++)
	{
		j = i;
		while (j > 0)
		{
			if (j > 0)
			{
				if (array_tmp[j - 1] > array_tmp[j])
				{
					swap_int(&array_tmp[j - 1], &array_tmp[j]);
					print_array(array_tmp, list_len);
				}
				j--;
			}
		}
	}
	free_listint_t(*list);
	*list = create_listint(array_tmp, list_len);
	free(array_tmp);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
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

/**
 * free_listint_t - free a doubly linked list
 * @head: double pointer to first element
 * Return: void function
 */
void free_listint_t(listint_t *head)
{
	listint_t *copy;

	while (head != NULL)
	{
		copy = head->next;
		free(head);
		head = copy;
	}
}
