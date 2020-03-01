#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of pointers to a string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		if (atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("Error\n");

			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
