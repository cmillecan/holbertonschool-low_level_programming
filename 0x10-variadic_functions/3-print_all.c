#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list optArgs;
	int i;
	int peak;
	char *str;

	va_start(optArgs, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(optArgs, int));
				break;
			case 'i':
				printf("%d", va_arg(optArgs, int));
				break;
			case 'f':
				printf("%f", va_arg(optArgs, double));
				break;
			case 's':
				str = va_arg(optArgs, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
		}

		peak = i + 1;
		if (format[peak] != '\0' &&
			(format[i] == 'c' ||
			format[i] == 'i' ||
			format[i] == 'f' ||
			format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
}
