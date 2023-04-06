/**
 * sqrt_checker - checks the input number from n to the base
 * @cmp: number is squared and compared against base
 * @n: base number to check
 * Return: natural square root of number base
 */
int sqrt_checker(int cmp, int n)
{
	if (cmp * cmp == n)
		return (n);
	if (cmp * cmp > n)
		return (-1);
	return (sqrt_checker(cmp + 1, n));
}

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_checker(1, n));
}
