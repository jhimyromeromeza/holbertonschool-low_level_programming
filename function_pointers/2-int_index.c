#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function look an integer
 * @array: elemnts pointers
 * @size: size de elements
 * @cmp: function of compare value
 *
 * Return: nothing (succelss)
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
