#include <stdio.h>

/**
 * main - prints the sizes
 * Return: 0 if exited properly, else non-zero
 */
int main(void)
{
long long quite_long;
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(quite_long));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
