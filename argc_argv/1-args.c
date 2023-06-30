#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: count arguments
 * @argv: check pinters arguments
 *
 * Return: numbers (succelss)
 */

int main(int argc, char *argv[])

{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
