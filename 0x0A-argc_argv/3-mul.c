#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of pointers to a string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num;
	int num1;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num = atoi(argv[1]);
	num1 = atoi(argv[2]);

	printf("%d\n", num * num1);

	return (0);
}
