#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplies two numbers
 * @argc: check pointers
 * @argv: check pointers
 *
 * Return: Always multiplies (succelss)
 */

int main(int argc, char *argv[])

{
	int var;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	var = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", var);
	return (0);
}
