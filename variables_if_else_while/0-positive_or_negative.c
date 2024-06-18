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
	printf("%d is ", n);

	if (n > 0)
	printf("positive\n");
	else if (n == 0)
	printf("zero\n");
	else
	printf("negative\n");
	return (0);
}
