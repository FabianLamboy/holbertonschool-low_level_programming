#include <stdio.h>
/**
 *  main - Prints all numbers
 *  Description - Prints all numbers from zero to ten
 *  Return: Ends the code
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
