#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: always success (0)
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
