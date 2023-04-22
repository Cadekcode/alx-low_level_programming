#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array of the int to be search.
  * @size: size of the int in the array
  * @cmp: cmp
  *
  * Return: -1 if succesful.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
