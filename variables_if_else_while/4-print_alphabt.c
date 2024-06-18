#include <stdio.h>
/**
 *  main - Prints the alphabet
 *  Description - without q and e
 *  Return: Ends the code
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
