#include <stdio.h>
/**
 * main - A program that print the size of various type 
 * Return: o on success
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of an long int: %lu bytes(s)", sizeof(long int));
	printf("Size of an long long int: %lu bytes(s)", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
