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
	int num1;
	int num2;
	char *operator;
	int (*tipofuncion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	tipofuncion = get_op_func(operator);

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
