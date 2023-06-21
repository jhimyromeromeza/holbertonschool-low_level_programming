#include <main.h>
/**
 * main - print _putchar, followed by a new line
 *
 * Return: Always 0 (succelss)
 */

int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str++);
	}
	return (0);
}
