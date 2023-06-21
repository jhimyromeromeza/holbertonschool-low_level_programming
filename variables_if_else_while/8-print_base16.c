#include <stdio.h>
/**
 * main- return number in base 16
 *
 * Return: always 0 (succelss)
 */

int main(void)
{
	char i;
	char e;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
