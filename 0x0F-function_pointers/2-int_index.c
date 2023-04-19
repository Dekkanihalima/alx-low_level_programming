#include "function_pointers.h"

/**
 * int_idex - searches for an integer
 * @array: array with data
 * @size: size of the array
 * @cmp: funtion pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
