#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: pointers check
 *
 * Return: number de lang (succelss)
 */

int _atoi(char *s)

{
	int i;
	int signo = 1;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			signo *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0') * signo;
		else if (num > 0)
			break;
	}
	return (num);
}
