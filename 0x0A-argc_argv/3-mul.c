#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * @argv : the string from the terminal
 * @argc : the number of arameters
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
