#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns the sum of a and b.
  * @a: int to be added.
  * @b: int to be added.
  *
  * Return: a + b if succesful
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference of a and b.
  * @a: subtracted from b
  * @b: int to be subtracted
  *
  * Return: a - b is success.
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of a and b.
  * @a: multplied by b
  * @b: to be multiplied by a
  *
  * Return: a * b is successful
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the result of the division of a by b.
  * @a: int to be divided
  * @b: divided by a
  *
  * Return: a/b is success.
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (a / b);
}

/**
  * op_mod - returns the remainder of the division of a by b.
  * @a: int to be returned remainder
  * @b: divided by a
  *
  * Return: a % b success
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
