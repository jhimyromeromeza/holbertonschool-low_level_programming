#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function of print name
 * @name: check pinters
 * @f: pointers functions
 *
 * Return: name (succelss)
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
		f(name);
}
