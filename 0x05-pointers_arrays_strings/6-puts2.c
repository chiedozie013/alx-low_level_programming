#include "main.h"

/**
 * puts2 - prints one character out of 2
 * followed by a new line
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i, j = 0;


	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
