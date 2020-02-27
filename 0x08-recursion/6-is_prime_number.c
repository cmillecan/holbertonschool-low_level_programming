#include "holberton.h"

int checkPrime(int i, int n);

/**
 * is_prime_number - returns 1 if integer is a prime number, else returns 0.
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (checkPrime(n, 2));
}

/**
 * checkPrime - checks if number is prime.
 * @n: number
 * @i: index
 * Return: int
 */

int checkPrime(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	if (n / i * i == n)
	{
		return (0);
	}

	return (checkPrime(n, i + 1));
}
