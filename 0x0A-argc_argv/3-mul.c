#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int result =  atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	return (0);
}