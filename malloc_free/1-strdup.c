#include <stdlib.h>
/**
 * _strdup - fuction what return an pointers
 * @str: check pointers
 *
 * Return: Allocated a pointers (succelss)
 */

char *_strdup(char *str)

{
	char *new_str;
	int i;
	int lar = 0;

	if (str == NULL)
		return (NULL);

	while (str[lar])
		lar++;
	new_str = malloc(sizeof(char) + (lar + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < lar; i++)
		new_str[i] = str[i];
	new_str[lar] = '\0';

	return (new_str);
}
