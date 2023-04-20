#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	/* Declaring pointer to the */
	/* argument list */
	va_list ptr;

	/* Initializing argument to the */
	/* list pointer */
	va_start(ptr, n);

	i = 0;
	while (i < n)
	{
		/* Accessing current variable */
		/* and pointing to next one */
		printf("%d", va_arg(ptr, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
