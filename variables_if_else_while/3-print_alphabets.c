#include <stdio.h>
/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: always 0 (succelss)
 */

int main(void)
{
	char i;
	char e;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	for (e = 'A'; e <= 'Z'; e++)
	putchar(e);
	putchar('\n');
return (0);
}
