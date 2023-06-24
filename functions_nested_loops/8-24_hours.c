#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer - print minute from day
 *
 * Return: Always 0 (succels)
 */

void jack_bauer(void)

{
	int hora;
	int minuto;

	for (hora = 0; hora < 24; hora++)
	{
		for (minuto = 0; minuto < 60; minuto++)
		{
		printf("%02d:%02d\n", hora, minuto);
		}
	}
}
