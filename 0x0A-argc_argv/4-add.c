#include <stdlib.h>
#include <stdio.h>

int isNumber(char *);

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

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * isNumber - checks if str is a number
 * @str: string
 * Return: int
 */
int isNumber(char *str)
{
	int num;
	int i;

	num = atoi(str);
	if (num == 0)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				return (0);
			}
		}
	}

	return (1);
}
