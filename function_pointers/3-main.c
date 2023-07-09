#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * main - print result de calc
 * @argc: cantidad
 * @argv: parameters
 *
 * Return: result int (succelss)
 */
int main(int argc, char *argv[])

{
	int resultado;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int (*tipofuncion)(int, int) = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (tipofuncion == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	resultado = tipofuncion(num1, num2);
	printf("%d\n", resultado);
	return (0);
}
