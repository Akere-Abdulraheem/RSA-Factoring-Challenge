#include <stdio.h>

/**
 * main - Prints out the value of the argument passed to it
 * @argc: arguments counts
 * @argv: arguments value
 *
 * Return: Error if argument is less or more than two.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc == 2)
	{
		printf("Filename:%s\n", argv[1]);
	}
	else
	{
	       printf("ERROR: Please add a file\n");
	}
	return (0);
}
