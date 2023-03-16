#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longType;
	long long int llongType;
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %lu byte(s)\n", sizeof(longType));
	printf("Size of long long int: %lu byte(s)\n", sizeof(llongType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
