#include <stdio.h>
/*Declaration of _putchar*/
int _putchar(char c);

/**
 * main - Prints
 * Description - Prints _putchar, followed
 * by a new line
 * Return: Ends the command
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
/**
 * _putchar - writes a character t stdout
 * @c: The character to print
 * Return: on success 1
 */
int _putchar(char c)
{
	putchar(c);
	return (c);
}
