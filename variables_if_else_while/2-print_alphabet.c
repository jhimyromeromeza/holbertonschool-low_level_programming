#include <stdio.h>
/**
 * main - print the alphabet from a to z
 *
 *Return: always 0 (succelss)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
