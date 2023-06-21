#include <stdio.h>
/**
 *main - print number of base 10 startibg 0 followed of new linw
 *
 * Return: always 0 (succelss)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
		putchar('\n');
	
	return (0);
}
