#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(S)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(S)\n", sizeof(float));
	return(0);
}
