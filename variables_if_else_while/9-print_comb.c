#include <stdio.h>
/**
*main - Prints all possible combinations
*Description - of single-digit numbers
*Return: Ends the code
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	if (n < 9)
		printf(", ");
	printf("\n");
	return (0);
}
