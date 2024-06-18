#include <stdio.h>
/**
*main - Prints the alphabet
*Description - in reverse
*Return: Ends the code
*/
int main(void)
{
	char c;

	for (c = 'a'; c >= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
