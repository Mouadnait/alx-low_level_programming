#include <stdio.h>

#ifndef PRINT_FILE
#define PRINT_FILE printf("%s\n", __FILE__)
#endif

int main(void)
{
	PRINT_FILE;
	return (0);
}
