#include <stdio.h>
#include <stdlib.h>
/**
 * main - suma de arguments
 * @argc: check arguments
 * @argv: check arguments
 *
 * Return: result (succelss)
 */

int main(int argc, char *argv[])

{
	int i;
	int var;
	
	if (argc <= 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		var += atoi(argv[i]);
	}
	printf("%d\n", var);
return (0);
}
