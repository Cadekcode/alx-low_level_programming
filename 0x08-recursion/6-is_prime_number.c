#include "main.h"

/**
 * is_prime_number - function to call for the prime number.
 * @n: int
 *
 * Return: int.
 */

int is_prime_number(int n)
{
    if (n <= 1)
	{
	    return 0;
	}
    for (int i = 2; i <= sqrt(n); i++)
    {
	    if (n % i == 0)
		return 0;
    }
    	return 1;
}

