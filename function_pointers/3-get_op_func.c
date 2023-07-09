#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - look function
 * @s: operator
 *
 * Return: pointer to the function that correspond
 */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s == NULL || s[1] != '\0' || (*s != '/' && *s != '+' && *s != '-' && *s != '*' && *s != '%'))
	{
		return (NULL);
	}
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
