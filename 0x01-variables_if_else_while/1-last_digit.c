#include <stdio.h>
#include <time.h>
/**
 * main-Prints out if the last digit is
 * larger than 5,
 * less than 5 and equals to 0,
 * less than 6 and larger than 0,
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n= rand() - RAND_MAX / 2;
	if (n>5)
	{
		printf("Last digit of %d and %d is greate than 5\n", n);
	}
	else if (n==0)
	{
		printf("Last digit of %d and %d is 0\n", n);
	}
	else
	{
		printf("Last digit of %d and %d is less than 6 and not 0\n", n);
	}
	return (0);
}
