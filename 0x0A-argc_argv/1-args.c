#include "main.h"
/**
 * main - program that print the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	/*argv[0] = 0;*/
	return (0);
}
