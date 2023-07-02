#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: check pointer 1
 * @s2: check pointers 2
 *
 * Return: concatenates (succelss)
 */

char *str_concat(char *s1, char *s2)

{
	char *new;
	int i, j;
	int lar = 0;
	int lar2 = 0;

	if (s1 != NULL)
		while (s1[lar])
			lar++;
	if (s2 != NULL)
		while (s2[lar2])
			lar2++;
	new = malloc(sizeof(char) * (lar + lar2 + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < lar; i++)
		new[i] = s1[i];
	for (j = 0; j < lar2; j++, i++)
		new[i] = s2[j];
	new[i] = '\0';

	return (new);
}
