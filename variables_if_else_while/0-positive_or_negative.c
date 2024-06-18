#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the number within the variable
 * Description - The source code will print whether the number
 * Return: Ends the code
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	printf("The number %d, \n");
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
