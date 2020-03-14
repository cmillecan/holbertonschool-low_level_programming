#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list opArgs;
	unsigned int i;

	va_start(opArgs, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(opArgs, char*));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(opArgs);
}
