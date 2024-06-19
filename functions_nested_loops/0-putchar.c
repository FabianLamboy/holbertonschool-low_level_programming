#include <stdio.h>
/**
 * main - Prints
 * Description - Prints _putchar, followed
 * by a new line
 * Return: Ends the command
 */
int _putchar(char c);
/**
 * Declaration of _putchar
 * Description - _putchar
 * Return: alwayd 0
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
 * _putchar - prints the characters
 * Description: help me
 * Return: always 0
 * */
int _putchar(char c)
{
	return putchar(c);
}
