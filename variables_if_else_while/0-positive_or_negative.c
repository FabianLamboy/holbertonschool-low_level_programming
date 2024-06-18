#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the number within the variable
 * Description - The source code will print the number
 * Return: Ends the code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The variable is positive\n");
	}
	if (n < 0)
	{
		printf("The variable is negative\n");
	}
	if (n == 0)
	{
		printf("The variable is zero\n");
	}
	return (0);
}
