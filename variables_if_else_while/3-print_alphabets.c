#include <stdio.h>
/**
 *  main - Prints the alphabet
 *  Description - Prints the alphabet in both uppercase and lowercase
 *  Return: Ends the code
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
