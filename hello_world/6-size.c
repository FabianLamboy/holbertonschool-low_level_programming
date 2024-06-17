#include <stdio.h>
/**
 * main - Prints the size
 * Description - Prints the size of various types
 * Return: Ends the script
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of shot: %zu byte(s)\n", sizeof(short));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	return (0);
}
