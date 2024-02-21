#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>
#include <time.h>


/**
* main - Prints a random number decides whether it is positive,negative,orzero.
*
* Return: Always 0.
=======
#include <time.h>
#include <stdio.h>

/**
*main- entry ponit
*Return: always (0)
>>>>>>> 7d9be19be3998e283a69928fc4bce49d98248780
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
<<<<<<< HEAD
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
=======
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
>>>>>>> 7d9be19be3998e283a69928fc4bce49d98248780
	return (0);
}
