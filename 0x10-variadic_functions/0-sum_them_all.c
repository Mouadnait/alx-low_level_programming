#include "variadic_functions.h"
/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int Sum, i;

	/* Declaring pointer to the */
	/* argument list */
	va_list ptr;

	/* Initializing argument to the */
	/* list pointer */
	va_start(ptr, n);

	for (i = Sum = 0; i < n; i++)
		/* Accessing current variable */
		/* and pointing to next one */
		Sum += va_arg(ptr, int);

	/* Ending argument list traversal */
	va_end(ptr);

	return (Sum);
}
