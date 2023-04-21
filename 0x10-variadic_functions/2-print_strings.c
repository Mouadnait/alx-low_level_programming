#include "variadic_functions.h"
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	/* Declaring pointer to the */
	/* argument list */
	va_list ptr;

	/* Initializing argument to the */
	/* list pointer */
	va_start(ptr, n);

	i = 0;
	while (i < n)
	{
		p = va_arg(ptr, char *);
		if (p == NULL || p[i] == '\0')
			printf("(nil)");
		else
		{
			/* Accessing current variable */
			/* and pointing to next one */
			printf("%s", p);
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ptr);
	printf("\n");
}
