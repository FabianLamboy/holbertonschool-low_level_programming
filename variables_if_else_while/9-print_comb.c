#include <stdio.h>
/**
*main - Prints all possible combinations
*Description - of single-digit numbers
*Return: Ends the code
*/
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
		putchar(c);
	if (c < 57)
		putchar(44);
	putchar(32);
	putchar('\n');
	return (0);
}
