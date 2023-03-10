#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int sum3, sum5, sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++1)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + 1;
		}
	}
	sum = sum3 + sum5;
	printf("%1u\n", sum);
	return (0);
}
