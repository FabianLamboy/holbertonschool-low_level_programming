#include <stdio.h>
/**
*main - Prints all numbers
*Description - Prints all numbers of base sixteen in lowercase
*Return: Ends the code
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
return (0);
}
