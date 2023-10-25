#include "main.h"

/**
 * _check - fun that check if the num is prime
 *
 * @n: checker integer
 *
 * @ch: checker integer
 *
 * Return: 1 if the number is prime or 0 if is not a prime
 */

int _check(int n, int ch)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (ch >= n / 2)
		return (1);
	if (n % ch == 0)
		return (0);
	else
		return (_check(n, ch + 1));
	return (1);
}

/**
 * is_prime_number - fun that returns 1 if the input is a prime number,
 * otherwise return 0.
 *
 * @n: checker integer
 *
 * Return: 1 if the number is prime or 0 if is not a prime
 */

int is_prime_number(int n)
{
	return (_check(n, 2));
}
