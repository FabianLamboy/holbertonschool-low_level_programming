#include <unistd.h>
/**
 * _putchar - aaaaaaaaaaa
 * @c: character to print
 * Description - aaaaaa
 * Return: always success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
