#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int leftNum;
	int rightNum;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	leftNum = atoi(argv[1]);
	rightNum = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (rightNum == 0 && (op_func == op_mod || op_func == op_div))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(leftNum, rightNum));

	return (0);
}
