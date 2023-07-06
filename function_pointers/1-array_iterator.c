#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes
 * @array: characteres pointers
 * @size: size of array
 * @action: pointer of function
 *
 * Return: nothing (succelss)
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
