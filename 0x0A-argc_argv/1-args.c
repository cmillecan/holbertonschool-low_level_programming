#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointers to a string
 * Return: int
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
