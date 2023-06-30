#include <stdio.h>
/**
 * main - print all parameters
 * @argc: check count arguments
 * @argv: check para,eters arguments
 *
 * Return: Always number of arguments (succelss)
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
