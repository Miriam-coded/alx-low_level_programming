#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: string that specifies the data type
 * ...: variable number of arguments corresponding to the format
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						printf("%s(nil)", sep);
					else
						printf("%s%s", sep, str);
				}
				break;
			default:
				sep = "";
				break;
		}
		sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
