#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: character
 * Return: always success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
