#include <stdio.h>
/**
 * main - print alphabet in reverse followed by a new line
 *
 * Return: always 0 (succelss)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
