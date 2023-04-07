#include "main.h"
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
		int i, sum, nums;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sscanf(argv[i], "%d", &nums);
				sum += nums;
				if (i == argc - 1)
					printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
