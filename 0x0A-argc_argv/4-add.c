#include "main.h"
/**
 * str_checker - to check is the string digit or not.
 * @c: argument vector
 * Return: 0 on success, 1 on failure
 */
int str_checker(char *c)
{
	while (*c != '\0')
	{
		if (!(*c >= '0' && *c <= '9'))
			return (0);
		c++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
	{
		int i, sum;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (str_checker(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
