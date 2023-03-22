#include <stdio.h>
<<<<<<< HEAD
/**
 * main - write code
 * 
 * Return: will return 1 for succcess
 */
int main(void)
{
	write("2, and that piece of art is useful - Dora Korpar, 2015-10-19\n", 61);
=======
#include <unistd.h>

/**
 * main - Prints Dora Korpar
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

>>>>>>> 34df1b90ac7b201f03082efabd6d65d2e013225d
	return (1);
}
