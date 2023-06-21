#include <stdio.h>
/**
 * main - print the alphabet lowercase les q and e
 *
 * Return: always 0 (succelss)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar (i);
		}
	}
	putchar ('\n');
return (0);
}
