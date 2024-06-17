#include <stdio.h>
/**
 * main - Prints the size
 * Description - Prints the size of various types
 * Return: Ends the script
 */
int main(char)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
