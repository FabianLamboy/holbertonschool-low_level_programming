#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: always success
 */
void more_numbers(void)
{
int i, j;

char num;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar('1');
}
num = j % 10 + '0';
_putchar(num);
}
_putchar('\n');
}
}