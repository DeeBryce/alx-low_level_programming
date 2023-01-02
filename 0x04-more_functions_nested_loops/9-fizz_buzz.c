#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * Description: Prints from number 1 - 100, Print Fizz for multiples of 3
 * Buzz for muliples of 5, and FizzBuzz for multipes of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
