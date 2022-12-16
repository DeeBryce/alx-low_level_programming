#include <stdio.h>
/**
 *  main - print out sizes of data types in C
 *  code by DeeBryce
 *  Return: 0
 */

int main(void)
{
	char a;
	int b:
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %i btye(s)\n", sizeof(char));
	printf("Size of an int: %i btye(s)\n", sizeof(int));
	printf("Size of a long int: %i btye(s)\n", sizeof(long int));
	printf("Size of a long long int: %i btye(s)\n", sizeof(long long int));
	printf("Size of a float: %i btye(s)\n", sizeof(float));
	return (0);
}
