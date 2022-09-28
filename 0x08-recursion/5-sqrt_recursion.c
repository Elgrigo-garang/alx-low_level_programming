#include
/**
 * _sqrt_recursion-returns square root of a number
 * @n: number
 *
 * Return:the square root
 */
int _sqrt_recursion(int n)
	{
		if (n == 1 || n == 0)
			return (_sqrt(0, n));
	}
/**
 * _sqrt-returns square root
 * @n:test number
 * @x:square number
 *
 * Return:square of n
 */
int _sqrt(int n, int x)
	{
		if (n > x / 2)
			return (-1);
		else if (n * n == x)
			return (n);
		return (_sqrt(n + 1, x));
	}
